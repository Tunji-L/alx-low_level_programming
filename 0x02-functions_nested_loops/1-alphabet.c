#include "main.h"
/**
 * print_alphabet - Alphabet in lowercase and print newline
 *
 * Return: 0 for success
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}
