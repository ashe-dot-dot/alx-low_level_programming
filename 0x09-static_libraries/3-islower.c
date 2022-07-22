#include "main.h"

/**
 * _islower - checks if a character is lowercase or not
 *
 * @c: the character to check
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) ? 1 : 0);
}
