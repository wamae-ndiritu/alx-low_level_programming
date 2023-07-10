#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * print_err - helper function, helps to print error
 * @err_msg: pointer to the error message
 * @filename: pointer to the name of the file being processed
 * @fd: file descriptor to the file that was being processed
 *
 * Return: Nothing.
 */

void print_err(char *err_msg, char *filename, int fd)
{
	char error_message[200];

	sprintf(error_message, "%s %s", err_msg, filename);
	if (fd != -1)
	{
		char fd_msg[50];

		sprintf(fd_msg, ", fd %d", fd);
		strcat(error_message, fd_msg);
	}
	strcat(error_message, "\n");
	dprintf(STDERR_FILENO, "%s", error_message);
}

/**
 * handle_close_err - helper function, helps close a file
 * @filename: pointer to the name of the file being closed
 * @fd: file descriptor to the file
 *
 * Return: Nothing.
 */

void handle_close_err(char *filename, int fd)
{
	if (close(fd) == -1)
	{
		print_err("Error: Can't close fd", filename, fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: count of command line argument passed
 * @argv: array of command line arguments passed
 *
 * Return: Always 0.
 */

int main(int ac, char **argv)
{
	char *file_from = argv[1], *file_to = argv[2], buffer[BUF_SIZE];
	int fd_from, fd_to;
	ssize_t read_bytes, write_bytes;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_err("Error: Can't read from file", file_from, -1);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		print_err("Error: Can't write to", file_to, -1);
		exit(99);
	}
	while ((read_bytes = read(fd_from, buffer, BUF_SIZE)) >  0)
	{
		write_bytes = write(fd_to, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			print_err("Error: Can't write to", file_to, fd_to);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		print_err("Error: Can't read from file", file_from, fd_from);
		exit(98);
	}
	handle_close_err(file_from, fd_from);
	handle_close_err(file_to, fd_to);
	return (0);
}
