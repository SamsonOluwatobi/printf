#include "main.h"
/**
 * print_hex - Prints an integer in lowercase hexadecimal format.
 * @num: The integer to be printed.
 */
void print_hex(unsigned int num)
{
	char hex[] = "0123456789abcdef";

	if (num >= 16)
		print_hex(num / 16);
	_putchar(hex[num % 16]);
}
/**
 * print_HEX - Prints an integer in uppercase hexadecimal format.
 * @num: The integer to be printed.
 */
void print_HEX(unsigned int num)
{
	char HEX[] = "0123456789ABCDEF";

	if (num >= 16)
		print_HEX(num / 16);
	_putchar(HEX[num % 16]);
}
