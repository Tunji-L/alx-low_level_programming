#include "main.h"
/**
 * print_rev - print reverse of a string
 * @s: input string
 */
void print_rev(char *s)
{
	int len;
	int count;

	len = 0;
	while (s[len] != '\0')
		len++;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
