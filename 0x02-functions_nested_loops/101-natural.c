#include <stdio.h>
#include "main.h"

/**
 * main - display sum of multiples of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int n, sum;

	n = 1024;
	while (n > 0)
	{
		n--;
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
