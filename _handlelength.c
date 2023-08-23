#include "main.h"

/**
 * handle_int_conversion - Handle integer conversion based on format.
 * @format: Format specifier string.
 * @args: va_list containing arguments.
 *
 * This function handles integer conversion based on the given format
 * specifier. It extracts and returns the corresponding integer value
 * from the va_list argument.
 *
 * Return: The converted integer value.
 */
int handle_int_conversion(const char *format, va_list args)
{
	int value;

	if (format[0] == 'l' && format[1] == 'd')
	{
		value = va_arg(args, long int);
	}
	else if (format[0] == 'h' && format[1] == 'd')
	{
		value = (short) va_arg(args, int);
	}
	else
	{
		value = va_arg(args, int);
	}
	return (value);
}


/**
 * handle_octal_conversion - Handle octal conversion based on format.
 * @format: Format specifier string.
 * @args: va_list containing arguments.
 *
 * This function handles octal conversion based on the given format
 * specifier. It extracts and returns the corresponding unsigned integer
 * value from the va_list argument.
 *
 * Return: The converted unsigned integer value in octal format.
 */
unsigned int handle_octal_conversion(const char *format, va_list args)
{
	unsigned int value;

	if (format[0] == 'l' && format[1] == 'o')
	{
		value = va_arg(args, unsigned long int);
	}
	else if (format[0] == 'h' && format[1] == 'o')
	{
		value = (unsigned short) va_arg(args, unsigned int);
	}
	else
	{
		value = va_arg(args, unsigned int);
	}
	return (value);
}


/**
 * handle_hex_conversion - Handle hexadecimal conversion based on format.
 * @format: Format specifier string.
 * @args: va_list containing arguments.
 *
 * This function handles hexadecimal conversion based on the given format
 * specifier. It extracts and returns the corresponding unsigned integer
 * value from the va_list argument.
 *
 * Return: The converted unsigned integer value in hexadecimal format.
 */
unsigned int handle_hex_conversion(const char *format, va_list args)
{
	unsigned int value;

	if (format[0] == 'l' && format[1] == 'x')
	{
		value = va_arg(args, unsigned long int);
	}
	else if (format[0] == 'h' && format[1] == 'X')
	{
		value = (unsigned short) va_arg(args, unsigned int);
	}
	else
	{
		value = va_arg(args, unsigned int);
	}
	return (value);
}


/**
 * handle_unsigned_conversion - Handle unsigned integer conversion
 * based on format.
 * @format: Format specifier string.
 * @args: va_list containing arguments.
 *
 * This function handles unsigned integer conversion based on the given format
 * specifier. It extracts and returns the corresponding unsigned integer value
 * from the va_list argument.
 *
 * Return: The converted unsigned integer value.
 */
unsigned int handle_unsigned_conversion(const char *format, va_list args)
{
	unsigned int value;

	if (format[0] == 'l' && format[1] == 'u')
	{
		value = va_arg(args, unsigned long int);
	}
	else if (format[0] == 'h' && format[1] == 'u')
	{
		value = (unsigned short) va_arg(args, unsigned int);
	}
	else
	{
		value = va_arg(args, unsigned int);
	}
	return (value);
}


