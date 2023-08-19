#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - prints an integer
 * @num: The number to be printed
 *
 * Return: Number of digits printed
 */
int print_number(int num)
{
	int count = 0;

	if (num < 0)
	{
		count += putchar('-');
		num = -num;
	}

	if (num / 10)
		count += print_number(num / 10);
	count += putchar(num % 10 + '0');

	return (count);
}

/**
 * digit_count - counts the number of digit in an integer
 * @n: The integer to count digits for
 * Return: Number of digits in the integer
 */
int digit_count(int n)
{
	int count = 0;

	if (n == 0)
	return (1);	
	while (n != 0)
	{
		n /= 10;
		count++;
	}

	return (count);
}
