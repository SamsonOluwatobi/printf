#include "main.h"

/**
 * _printchar - Prints a character.
 * @args: A va_list containing the arguments.
 * @Buffer: The buffer to store the formatted output.
 *
 * Return: The number of characters printed.
 */
int _printchar(va_list args, char Buffer[])
{
	char c;

	c = va_arg(args, int);
	return (format_char(c, Buffer));
}

/**
 * _printstring - Prints a string.
 * @args: A va_list containing the arguments.
 * @Buffer: The buffer to store the formatted output.
 *
 * Return: The number of characters printed.
 */
int _printstring(va_list args, char Buffer[])
{
	int len = 0;
	char *str = va_arg(args, char *);

	NON(Buffer);

	if (str == NULL)
	{
		str = "(NULL)";
	}

	while (str[len] != '\0')
		len++;
	return (write(1, str, len));
}

/**
 * _printpercent - Prints a percent symbol.
 * @args: A va_list containing the arguments.
 * @Buffer: The buffer to store the formatted output.
 *
 * Return: The number of characters printed.
 */
int _printpercent(va_list args, char Buffer[])
{
	NON(args);
	NON(Buffer);
	return (write(1, "%%", 1));

}

/**
 * _printint - Prints an integer.
 * @args: A va_list containing the arguments.
 * @Buffer: The buffer to store the formatted output.
 *
 * Return: The number of characters printed.
 */
int _printint(va_list args, char Buffer[])
{
	int i = BUFF_SIZE - 2;
	int neg = 0;
	int l = va_arg(args, int);
	unsigned int n;

	if (l == 0)
		Buffer[i--] = '0';
	Buffer[BUFF_SIZE - 1] = '\0';
	n = (unsigned int)l;

	if (l < 0)
	{
		i = BUFF_SIZE - 3;
		n = (unsigned int)(-l);
		neg = 1;
	}

	while (n > 0)
	{
		Buffer[i--] = (n % 10) + '0';
		n = n / 10;
	}
	i++;
	return (format_number(neg, i, Buffer));
}


/**
 * _printbinary - Prints a binary representation of an integer.
 * @args: A va_list containing the arguments.
 * @Buffer: The buffer to store the formatted output.
 *
 * Return: The number of characters printed.
 */
int _printbinary(va_list args, char Buffer[])
{
	unsigned int n, bitmask, bit[32], i, bit_count;
	int count;

	NON(Buffer);

	n = va_arg(args, int);
	bitmask = 2147483648;
	bit[0] = n / bitmask;

	for (i = 1; i < 32; i++)
	{
		bitmask /= 2;
		bit[i] = (n / bitmask) % 2;
	}

	for (i = 0, bit_count = 0, count = 0; i < 32; i++)
	{
		bit_count += bit[i];

		if (bit_count || i == 31)
		{
			char bit_char = '0' + bit[i];

			write(1, &bit_char, 1);
			count++;
		}
	}
	return (count);
}
