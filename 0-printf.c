#include "main.h"

/**
 * _printbuffer - Flushes the content of the buffer to the standard output.
 * @Buffer: The buffer containing characters to be printed.
 * @index: A pointer to the current index in the buffer.
 */
void _printbuffer(char Buffer[], int *index);

/**
 * _printf - Custom implementation of the printf function.
 * @format: The format string containing the format specifiers.
 * @...: Additional arguments corresponding to format specifiers.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, output = 0, _printedchars = 0, index = 0;
	va_list args;
	char Buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i =  0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			Buffer[index++] = format[i];
			if (index == BUFF_SIZE)
				_printbuffer(Buffer, &index);
			_printedchars++;
		}
		else
		{
			_printbuffer(Buffer, &index);
			++i;
			output = format_output(format, &i, args, Buffer);
			_printedchars += output;
		}
	}
	_printbuffer(Buffer, &index);
	va_end(args);
	return (_printedchars);
}

/**
 * _printbuffer - Flushes the content of the buffer to the standard output.
 * @Buffer: The buffer containing characters to be printed.
 * @index: A pointer to the current index in the buffer.
 */
void _printbuffer(char Buffer[], int *index)
{
	if (*index > 0)
		write(1, &Buffer[0], *index);
	*index = 0;
}
