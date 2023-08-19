#include "main.h"
/**
 * print_octal - Prints an integer in octal format.
 * @num: The integer to be printed in octal format.
 */
void print_octal(unsigned int num)
{
	if (num >= 8)
		print_octal(num / 8);
	_putchar((num % 8) + '0');
}
