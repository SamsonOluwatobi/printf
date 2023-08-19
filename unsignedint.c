#include "main.h"
/**
 * print_unsignedint - Prints an unsigned integer.
 * @num: The unsigned integer to be printed.
 */
void print_unsignedint(unsigned int num)
{
	if (num / 10)
		print_unsignedint(num / 10);
	_putchar((num % 10) + '0');
}
