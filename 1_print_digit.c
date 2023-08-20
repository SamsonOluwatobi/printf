#include "main.h"

/**
 * print_number - prints an integer
 * @num: The number to be printed
 *
 * Return: Number of digits printed
 */
void print_number(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * digit_count - counts the number of digit in an integer
 * @n: The integer to count digits for
 * Return: Number of digits in the integer
 */
void digit_count(int n)
{
	int count = 0;

	if (n == 0)
	while (n != 0)
	{
		n /= 10;
		count++;
	}

}
