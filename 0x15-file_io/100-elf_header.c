#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 1024

/**
 * print_err - prints error message  to the stderr
 * @err_msg: pointer to the error message
 *
 * Return: Nothing.
 */
void print_err(char *err_msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", err_msg);
}

/**
 * check_OS_ABI - checks for the OS/ABI of the header file
 * @header: pointer to the header file
 *
 * Return: Nothing.
 */

void check_OS_ABI(Elf64_Ehdr *header)
{
	printf("   OS/ABI:                             ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone APP\n");
			break;
		case ELFOSABI_ARM:
			printf("RAM\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_ident[EI_OSABI]);
			break;
	}
}

/**
 * check_type - check type of the ELF header file
 * @header: pointer to the header file
 *
 * Return: Nothing.
 */

void check_type(Elf64_Ehdr *header)
{
	printf("   Type:                             ");
	switch (header->e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %d>\n", header->e_type);
			break;
	}
}

/**
 * print_elf_header - prints the elf header
 * @header: pointer to the header file
 *
 * Return: Nothing.
 */

void print_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("   Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "unknown");
	 printf("  DATA:                             %s\n",
			 (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			 "2's complement, little endian" : "unknown");
	  printf("  VERSION:                             %d%s\n",
			  header->e_ident[EI_VERSION],
			  (header->e_ident[EI_VERSION] == EV_CURRENT)
			  ? "(current)" : "");
	  check_OS_ABI(header);
	   printf("  ABI Version:                             %d\n",
			   header->e_ident[EI_ABIVERSION]);
	   check_type(header);
	    printf("  Entry point address:                             %lx\n",
			    header->e_entry);
}

/**
 * main - displays the info conatined in the ELF header
 *	at the start of an ELF file.
 * @ac: count of command line arguments passed
 * @argv: pointer to an array of command line arguments passed
 *	to the main function
 * Return: 0 when success.
 */

int main(int ac, char **argv)
{
	int fd;
	ssize_t num_read;
	/*char buf[BUF_SIZE];*/
	Elf64_Ehdr ehdr;

	if (ac != 2)
	{
		print_err("Usage: elf_header elf_filename");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		char error_message[BUF_SIZE];

		snprintf(error_message, BUF_SIZE, "Cannot open file %s", argv[1]);
		print_err(error_message);
		exit(98);
	}
	num_read = read(fd, &ehdr, sizeof(Elf64_Ehdr));
	if (num_read < 0)
	{
		char error_message[BUF_SIZE];

		snprintf(error_message, BUF_SIZE, "Cannot read from file %s", argv[1]);
		print_err(error_message);
		exit(98);
	}
	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_err("Not an ELF file");
		exit(98);
	}
	print_elf_header(&ehdr);
	close(fd);
	return (0);
}
