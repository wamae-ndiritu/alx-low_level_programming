#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 *Return: returns 1 when successful
 *
 */

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int text_len = sizeof(text) - 1;
	int std_error_fd = 2;

	write(std_error_fd, text, text_len);
	return (1);
}
