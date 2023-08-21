#include "main.h"

/**
 * format_output - Process and format output
 * according to the provided format string.
 * @formatMap: The format string containing format specifiers.
 * @index: Pointer to the current index in the format string.
 * @args: The variable argument list containing values to be formatted.
 * @Buffer: The buffer to store the formatted output.
 *
 * This function processes format specifiers
 * in the @formatMap string and performs
 * the appropriate formatting for each specifier.
 * It uses the @args variable argument
 * list to retrieve values for formatting and
 * stores the formatted output in @Buffer.
 *
 * Return: The number of characters written to @Buffer, or -1 on error.
 */
int format_output(const char *formatMap,
	      int *index, va_list args, char Buffer[])
{
	int i, ul = 0, _printedchars = -1;

	format_Map format_types[] = {
		{'c', _printchar}, {'s', _printstring}, {'%', _printpercent},
		{'i', _printint}, {'d', _printint}, {'\0', NULL}
	};

	for (i = 0; format_types[i].formatMap != '\0'; i++)
		if (formatMap[*index] == format_types[i].formatMap)
			return (format_types[i].handler(args, Buffer));

	if (format_types[i].formatMap == '\0')
	{
		if (formatMap[*index] == '\0')
			return (-1);
		ul += write(1, "%%", 1);
		if (formatMap[*index - 1] == ' ')
			ul += write(1, " ", 1);
		ul += write(1, &formatMap[*index], 1);
		return (ul);
	}
	return (_printedchars);
}
