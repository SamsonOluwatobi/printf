#include "main.h"

/**
 * _printunsigned - Converts and prints an unsigned integer.
 * @args: A variable arguments list containing the unsigned integer to print.
 * @Buffer: A character buffer to store the converted string.
 *
 * This function takes an unsigned integer from the variable arguments list and
 * converts it into a character string representation. The resulting string is
 * stored in the Buffer provided.
 *
 * Return: The length of the converted string.
 */
int _printunsigned(va_list args, char Buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
		Buffer[i--] = '0';

	Buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		Buffer[i--] = (n % 10) + '0';
		n /= 10;
	}
	i++;

	return (format_unsgn(i, Buffer));
}


/**
 * _printoctal - Converts and prints an unsigned integer as an octal number.
 * @args: A variable arguments list containing the unsigned integer to print.
 * @Buffer: A character buffer to store the converted string.
 *
 * This function takes an unsigned integer from the variable arguments list and
 * converts it into a character string representation of its octal form. The
 * resulting string is stored in the Buffer provided.
 *
 * Return: The length of the converted string.
 */
int _printoctal(va_list args, char Buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
		Buffer[i--] = '0';

	Buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		Buffer[i--] = (n % 8) + '0';
		n /= 8;
	}
	i++;

	return (format_unsgn(i, Buffer));
}

/**
 * _printhex - Converts and prints an unsigned integer as a hexadecimal number.
 * @args: A variable arguments list containing the unsigned integer to print.
 * @Buffer: A character buffer to store the converted string.
 * @hexchars: A character array containing hexadecimal digits.
 *
 * This function takes an unsigned integer from the variable arguments list and
 * converts it into a character string representation of its hexadecimal form.
 * The resulting string is stored in the Buffer provided. The hexchars array is
 * used to map integer values to hexadecimal characters.
 *
 * Return: The length of the converted string.
 */
int _printhex(va_list args, char Buffer[], char hexchars[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
		Buffer[i--] = '0';

	Buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		Buffer[i--] = hexchars[n % 16];
		n /= 16;
	}
	i++;
	return (format_unsgn(i, Buffer));
}

/**
 * _printhexlow - Converts and prints an unsigned integer
 * as a lowercase hexadecimal number.
 * @args: A variable arguments list containing the unsigned integer to print.
 * @Buffer: A character buffer to store the converted string.
 *
 * This function takes an unsigned integer from the variable arguments list and
 * converts it into a character string representation of its lowercase
 * hexadecimal form. The resulting string is stored in the Buffer provided.
 *
 * Return: The length of the converted string.
 */
int _printhexlow(va_list args, char Buffer[])
{
	char *hexchars = "0123456789abcdef";

	return (_printhex(args, Buffer, hexchars));
}

/**
 * _printhexupper - Converts and prints an unsigned integer
 * as an uppercase hexadecimal number.
 * @args: A variable arguments list containing the unsigned integer to print.
 * @Buffer: A character buffer to store the converted string.
 *
 * This function takes an unsigned integer from the variable arguments list and
 * converts it into a character string representation of its uppercase
 * hexadecimal form. The resulting string is stored in the Buffer provided.
 *
 * Return: The length of the converted string.
 */
int _printhexupper(va_list args, char Buffer[])
{
	char *Hexchars = "0123456789ABCDEF";

	return (_printhex(args, Buffer, Hexchars));
}
