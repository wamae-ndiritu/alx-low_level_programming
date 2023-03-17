#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - prints numbers
 * from 0 to 9
 *
 * Return: always 0 when success
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);

}

