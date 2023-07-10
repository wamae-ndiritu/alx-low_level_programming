#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it
 *	to the POSIX standard output.
 * @filename: pointer to the file being processed
 * @letters: number of characters to read and print
 *
 * Return: 0 if file can't open, or filename is NULL,
 *	or if write fails, otherwise return numbers
 *	read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = (char *)malloc(letters + 1); /* size inludes the '\0' */
	if (buffer == NULL)
	{
		close(fp);
		return (0);
	}
	read_bytes = read(fp, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	buffer[read_bytes] = '\0';
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	free(buffer);
	close(fp);
	return (read_bytes);
}
