#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: Initial Segment
 * @accept: accepted characters
 * Return: length of first unoccurence
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
				break;
		}
		if (k < j)
			k = j;
	}
	return (k + 1);
}
