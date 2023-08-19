#include "main.h"
/**
 * print_binary - Prints an unsigned integer in binary format.
 * @num: The unsigned integer to be printed in binary.
 */
void print_binary(unsigned int num)
{
	if (num > 0)
	{
		print_binary(num >> 1);
		_putchar((num & 1) + '0');
	}
}
