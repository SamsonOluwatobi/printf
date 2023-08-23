#include "main.h"

/**
 * flag_chara - Calculates active flags for +, space, and #
 * @format: Formatted string in which to print the arguments
 * @i: Index of the current character in the format string
 * Return: Flags:
 */
int flag_chara(const char *format, int *i)
{
	int flags = 0;

	while (format[*i] == '+' || format[*i] == ' ' || format[*i] == '#')
	{
		if (format[*i] == '+')
			flags |= 1;
		else if (format[*i] == ' ')
			flags |= 2;
		else if (format[*i] == '#')
			flags |= 4;
		(*i)++;
	}
	return (flags);
}


