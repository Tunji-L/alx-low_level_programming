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
			if (*(s + i) == *(accept + j))
			{
				k = 1;
				break;
			}
			else
				k = 0;
		}
		if (k == 0)
			break;
	}
	return (i);
}
