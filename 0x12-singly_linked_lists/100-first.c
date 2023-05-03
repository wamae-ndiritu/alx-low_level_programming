#include <stdio.h>

void constructor_function(void) __attribute__((constructor));

/**
 * constructor_function - a constructor function
 *Description - the function is called by the OS
 *	when the program starts and therefore executes
 *	before the main function of the problem
 * Return: Nothing.
 */

void constructor_function(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
