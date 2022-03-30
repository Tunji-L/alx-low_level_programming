#include "main.h"
/**
 * _isdigit - checks if digit
 * @c: character
 * Return: 1 for true; 0 for false
 */
int _isdigit(int c)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			j = 1;
			break;
		}
		else
			j = 0;
	}
	return (j);
}
