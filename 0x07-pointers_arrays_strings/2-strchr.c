#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the input string
 * @c: the character to be searched
 *
 * Return: a pointer to the first ocurrence of the character c
 * in the stsring s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (0);
}
