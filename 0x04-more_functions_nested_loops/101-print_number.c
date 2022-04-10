#include "main.h"
#include <stdio.h>
/**
 * print_number - function that prints an integer
 * @n: Integer to be printed
 */
void print_number(int n)
{
	int count, i, j, k, l;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	count = 0;
	k = n;
	while (k / 10)
	{
		k = k / 10;
		count++;
	}
	while (count >= 0)
	{
		j = count;
		l = n;
		for (i = 1; i <= j; i++)
		{
			l = l / 10;
		}
		_putchar((l % 10) + '0');
		count--;
	}
	_putchar('\n');
}
