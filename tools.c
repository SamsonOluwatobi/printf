#include "main.h"

int _printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}

int _apphex(char ac, char Buffer[], int i)
{
	char Hex[] = "0123456789ABCDEF";

	if (ac < 0)
		ac *= -1;

	Buffer[i++] = '\\';
	Buffer[i++] = 'x';

	Buffer[i++] = Hex[ac / 16];
	Buffer[i] = Hex[ac % 16];

	return (3);
}
