#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	if (sizeof(s1) > sizeof(s2))
		j = sizeof(s1);
	else
		j = sizeof(s2);

	for (i = 0; i < j && (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] == s2[i])
			continue;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
