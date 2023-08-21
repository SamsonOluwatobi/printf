#include "main.h"

/**
 * format_char - Formats a single character and writes it to the buffer.
 * @c: The character to be formatted.
 * @Buffer: The buffer to store the formatted data.
 * Return: The number of characters written.
 */
int format_char(char c, char Buffer[])
{
	int i = 0;


	Buffer[i++] = c;
	Buffer[i] = '\0';
	return (write(1, &Buffer[0], 1));
}

/**
 * format_number - Formats a number and writes it to the buffer.
 * @neg: Indicates if the number is negative.
 * @index: The starting index in the buffer.
 * @Buffer: The buffer to store the formatted data.
 * Return: The number of characters written.
 */
int format_number(int neg, int index, char Buffer[])
{
	int len = BUFF_SIZE - index - 1;
	char _ch = 0;

	if (neg)
		_ch = '-';
	return (format_num(index, Buffer, len, _ch));
}

/**
 * format_num - Formats a number and writes it to the buffer.
 * @index: The starting index in the buffer.
 * @Buffer: The buffer to store the formatted data.
 * @len: The length of data to be written.
 * @_ch: The additional character (e.g., '-' for negative numbers).
 * Return: The number of characters written.
 */
int format_num(int index, char Buffer[], int len, char _ch)
{
	if (_ch)
		Buffer[--index] = _ch;
	return (write(1, &Buffer[index], len));
}


int format_unsigned(int index, char Buffer[])
{
	int len = BUFF_SIZE - index - 1;


	return (write(1, &Buffer[index], len));
}
