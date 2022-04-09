#include "main.h"
/**
 * print_square -  draws a square line on the terminal
 * @size: Size of square
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
