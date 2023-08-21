#include "main.h"

int _printunsigned(va_list args, char Buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
		Buffer[i--] = '0';

	Buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		Buffer[i--] = (n % 10) + '0';
		n /= 10;
	}
	i++;

	return (format_unsigned(i, Buffer));
}


int _printoctal(va_list args, char Buffer[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
		Buffer[i--] = '0';

	Buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		Buffer[i--] = (n % 8) + '0';
		n /= 8;
	}
	i++;

	return (format_unsigned(i, Buffer));
}

int _printhex(va_list args, char Buffer[], char hexchars[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int n = va_arg(args, unsigned long int);

	if (n == 0)
		Buffer[i--] = '0';

	Buffer[BUFF_SIZE - 1] = '\0';

	while (n > 0)
	{
		Buffer[i--] = hexchars[n % 16];
		n /= 16;
	}
	i++;
	return (format_unsigned(i, Buffer));
}

int _printhexlow(va_list args, char Buffer[])
{
	char *hexchars = "0123456789abcdef";

	return (_printhex(args, Buffer, hexchars));
}

int _printhexupper(va_list args, char Buffer[])
{
	char *Hexchars = "0123456789ABCDEF";

	return (_printhex(args, Buffer, Hexchars));
}
