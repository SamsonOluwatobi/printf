#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 * @...: Variadic arguments
 * return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int printed_charc = 0;

	va_list args;
	const char *str;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);
	while (*format)
		if (*format != '%')
		{
			write(1, format, 1);
			printed_charc++;
		}
		else
		{
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				printed_charc++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					write(1, str, 1);
					str++;
					printed_charc++;
				}
			}
			else if (*format == '%')
			{
				write(1, "%", 1);
				printed_charc++;
			}
		}
	format++;
	va_end(args);
	return (printed_charc);
}

int main(void)
{
	_printf("ifeoma\n");
	_printf("%c\n", 'K');
	_printf("%s\n", "String");
	_printf("%%\n");

	return (0);
}
