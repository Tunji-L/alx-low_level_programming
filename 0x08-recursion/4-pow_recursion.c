#include "main.h"
/**
 * _pow_recursion - x raised to the power of y
 * @x: Base number
 * @y: Power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
