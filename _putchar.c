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
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i])
}
