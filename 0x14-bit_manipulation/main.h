#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * union my_union - union to determine endianness of a machine
 * @i: an integer to be stored as a byte of array in the union
 * @ch: a string of size `sizeof(int)` to store
 *	the byte representation of the integer.
 *	It shares the same mem space as `i` since
 *	it's a union
 * Description: The union determines the endianness of the machine.
 *	If `ch[0]` is 1, it means the machine
 *	is big-endian otherwise little-endian
 */

union my_union
{
	int i;
	char ch[sizeof(int)];
};

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
#endif
