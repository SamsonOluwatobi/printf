#include "main.h"


/**
 * _printable - Checks if a character is a printable ASCII character.
 * @c: The character to be checked.
 *
 * This function determines whether a given
 * character falls within the printable
 * ASCII range (from 32 to 126, inclusive) and
 * returns 1 if it does, indicating
 * that the character is printable. If the character is outside this range, it
 * returns 0.
 *
 * Return: 1 if @c is a printable ASCII character, 0 otherwise.
 */
int _printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}


/**
 * _apphex - Appends a hexadecimal representation of a character to a buffer.
 * @ac: The character whose hexadecimal representation is to be appended.
 * @Buffer: The buffer to which the hexadecimal representation is appended.
 * @i: The current index in the buffer.
 *
 * This function takes a character @ac and appends its hexadecimal
 * representation to the provided @Buffer starting from the given index @i.
 * It also handles the case when the character is negative, by converting it
 * to its absolute value before appending the hexadecimal representation.
 *
 * Return: The number of characters added to the buffer (always 3).
 */
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
