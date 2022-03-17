#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: Input character
 *
 * Return: Last digit of a number
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		_putchar(-1 * r + '0');
		return (-1 * r);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
}
