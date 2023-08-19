#include <unistd.h>

/**
 * _putchar - Custom putchar function
 * @c: The character to print
 *
 * Return: The number of character printed(1)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
