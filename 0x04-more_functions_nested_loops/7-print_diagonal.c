#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n:  the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;
	if (n == 0)
		_putchar('\n');
	i = 0;
	while (i < n)
	{
		j = i;
		while (j > 0)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
