#include "main.h"
/**
 * _isupper - checks for uppercase character.
 *
 */
int _isupper(int c)
{
	int i, j;

	for (i = 'A'; i <= 'Z'; i++)
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
