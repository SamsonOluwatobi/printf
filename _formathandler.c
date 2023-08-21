#include "main.h"

int format_char(char c, char Buffer[])
{
	int i = 0;


	Buffer[i++] = c;
	Buffer[i] = '\0';
	return(write(1, &Buffer[0], 1));
}

int format_number(int neg, int index, char Buffer[])
{
	int len = BUFF_SIZE - index - 1;
	char _ch = 0;

	if (neg)
		_ch = '-';
	return(format_num(index, Buffer, len, _ch));
}

int format_num(int index, char Buffer[], int len, char _ch)
{
	if (_ch)
		Buffer[--index] = _ch;
	return (write(1, &Buffer[index], len));
}
