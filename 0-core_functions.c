#include "main.h"

int _printchar(va_list args, char Buffer[])
{
	char c;

	c = va_arg(args, int);
	return (format_char(c, Buffer));
}

int _printstring(va_list args, char Buffer[])
{
	int len = 0;
	char *str = va_arg(args, char *);

	NON(Buffer);

	if (str == NULL)
	{
		str = "(NULL)";
	}

	while (str[len] != '\0')
		len++;
	return (write(1, str, len));
}

int _printpercent(va_list args, char Buffer[])
{
	NON(args);
	NON(Buffer);
	return (write(1, "%%", 1));

}

int _printint(va_list args, char Buffer[])
{
	int i = BUFF_SIZE - 2;
	int neg = 0;
	long int l = va_arg(args, long int);
	unsigned long int n;

	if (l == 0)
		Buffer[i--] = '0';
	Buffer[BUFF_SIZE - 1] = '\0';
	n = (unsigned long int)l;

	if (l < 0)
	{
		n = (unsigned long int)(-l);
		neg = 1;
	}

	while (n > 0)
	{
		Buffer[i--] = (n % 10) + '0';
		n = n / 10;
	}
	i++;
	return (format_number(neg, i, Buffer));
}
