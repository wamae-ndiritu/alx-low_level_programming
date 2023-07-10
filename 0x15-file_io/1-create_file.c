#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * create_file - creates a file
 * @filename: pointer to the file to be created
 * @text_content: text content to be added to the created file
 *
 * Return: returns 1 on success, or -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t text_len, write_bytes;
	mode_t mask;

	if (filename == NULL)
		return (-1);

	mask = umask(0);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
	umask(mask);
	if (fp == -1)
	{
		if (errno == EEXIST)
		{
			fp = open(filename, O_WRONLY | O_TRUNC);
			if (fp == -1)
				return (-1);
			if (truncate(filename, 0) == -1)
				return (-1);
		}
		return (-1);
	}
	text_len = strlen(text_content);
	write_bytes = write(fp, text_content, text_len);
	if (write_bytes == -1 && write_bytes != text_len)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
