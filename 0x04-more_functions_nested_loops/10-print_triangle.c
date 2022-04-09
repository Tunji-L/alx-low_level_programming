#include "main.h"
/**
 * print_triangle -  draws a diagonal line on the terminal
 * @size: Length of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i + 1; j--)
				_putchar(32);
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
