#include <stdio.h>
int main(void)
{
	char hex_numbers[] = "0123456789abcdef"; //a string of characters
	int i = 0;

	//looop thru the string
	while (i < 16)
	{
		putchar(hex_numbers[i]);
		i++;
	}
	putchar('\n');
	return (0);

}
