#include "main.h"

int format_output(const char *formatMap, int *index, va_list args, char Buffer[])
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
