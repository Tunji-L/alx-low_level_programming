#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: Length of diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
	}
}
