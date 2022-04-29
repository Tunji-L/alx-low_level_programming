#include "main.h"
/**
 * _pow - power of a number
 * @x: base
 * @y: power
 * Return: result
 */

int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow(x, (y - 1)));
}
/**
 * binary_to_uint - convert binary to integer
 * @b: binary string
 * Return: integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == 48 || b[i] == 49)
			;
		else
			return (0);
	}

	int j = 0;

	while (i > 0)
	{
		int a = b[i - 1];

		if (a == 48)
			a = 0;
		else
			a = 1;
		sum += (a * _pow(2, j));
		i--;
		j++;
	}
	return (sum);
}
