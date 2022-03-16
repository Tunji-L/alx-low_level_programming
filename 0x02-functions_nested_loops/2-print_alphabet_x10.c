#include "main.h"
/**
 * print_alphabet -  prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 for success
 */
void print_alphabet_x10(void)
{
	int i;
	int count = 1;

	while (count <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(10);
		count++;
	}
}
