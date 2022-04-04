#include "main.h"
/**
 * power - Testing for Power
 * @x: Base number
 * @y: Power
 * Return: power if match
 */
int power(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else
		return (0 + power(x, y + 1));
}
/**
 * _sqrt_recursion - Square root of a number
 * @n: Input number
 * Return: from power function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (power(n, 1));
}
