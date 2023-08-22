#include "main.h"

int _printunprintable(va_list args, char Buffer[])
{
	int i = 0, o = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		return (write(1, "(null)", 6));

	while (str[i] != '\0')
	{
		if (_printable(str[i]))
			Buffer[i + o] = str[i];
		else
			o += _apphex(str[i], Buffer, i + o);
		i++;
	}
	Buffer[i + o] = '\0';
	return (write(1, Buffer, i + o));
}

int _printpointer(va_list args, char Buffer[])
{
	char _ch = 0;
	int len, index = BUFF_SIZE - 4;
	unsigned long n;
	char hex[] = "0123456789abcdef";
	void *addr = va_arg(args, void *);

	if (addr == NULL)
		return (write(1, "(nil)", 5));
	Buffer[BUFF_SIZE - 1] = '\0';

	n = (unsigned long)addr;
	while (n > 0)
	{
		Buffer[index--] = hex[n % 16];
		n /= 16;
		len++;
	}
	index++;
	return (format_pointer(index, Buffer, _ch));
}
