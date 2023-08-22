#include "main.h"

/**
 * _printunprintable - Formats and prints a string,
 * converting unprintable characters to hexadecimal representation.
 * @args: A va_list containing the arguments passed to the function.
 * @Buffer: A character array to store the formatted output.
 *
 * This function takes a va_list containing arguments
 * and a character buffer to store the formatted output.
 * It processes the input string by replacing unprintable
 * characters with their hexadecimal representations. The resulting string is
 * stored in the Buffer and then written to the standard output.
 *
 * Return: The number of characters written to the standard output.
 */
int _printunprintable(va_list args, char Buffer[])
{
	int i = 0, o = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i] != '\0')
	{
		if (_printable(str[i]))
			Buffer[i + o] = str[i];
		else
			o += _apphex(str[i], Buffer, i + o);
		i++;
	}
	Buffer[i + o] = '\0';
	return (write(1, Buffer, i + o));
}


/**
 * _printpointer - Formats and prints a pointer address
 * in hexadecimal notation.
 * @args: A va_list containing the arguments passed to the function.
 * @Buffer: A character array to store the formatted output.
 *
 * This function takes a va_list containing arguments and
 *  a character buffer to store the formatted output.
 * It processes a pointer's address, converting it into
 *  hexadecimal notation and storing the result in the Buffer.
 * The formatted output is then written to the standard output.
 *
 * Return: The number of characters written to the standard output.
 */
int _printpointer(va_list args, char Buffer[])
{
	char _ch = 0;
	int len, index = BUFF_SIZE - 4;
	unsigned long n;
	char hex[] = "0123456789abcdef";
	void *addr = va_arg(args, void *);

	if (addr == NULL)
		return (write(1, "(nil)", 5));
	Buffer[BUFF_SIZE - 1] = '\0';

	n = (unsigned long)addr;
	while (n > 0)
	{
		Buffer[index--] = hex[n % 16];
		n /= 16;
		len++;
	}
	index++;
	return (format_pointer(index, Buffer, _ch));
}
