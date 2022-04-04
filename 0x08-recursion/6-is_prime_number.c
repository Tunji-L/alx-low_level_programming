#include "main.h"
/**
 * div_test - Testing for division
 * @x: Numerator
 * @y: Denominator
 * Return: 1 for prime & 0 for non-prime
 */
int div_test(int x, int y)
{
	if (x % y == 0 && y != x)
		return (0);
	else if (x == y)
		return (1);
	else
		return (0 + div_test(x, y + 1));
}
/**
 * is_prime_number - Prime number
 * @n: Input number
 * Return: 1 or 0 from div_test function
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (div_test(n, 2));
}
