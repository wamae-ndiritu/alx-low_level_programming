#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: pointer to the text content to be appended
 *
 * Return: 1 on success, or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t text_len, write_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		struct stat st;

		if (stat(filename, &st) == 0)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	text_len = strlen(text_content);
	write_bytes = write(fp, text_content, text_len);
	if (write_bytes == -1 || write_bytes != text_len)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
