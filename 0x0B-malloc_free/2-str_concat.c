#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: char 1
 * @s2: char 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *t;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	t = malloc(sizeof(*s1) * (i + j + 1));
	if (t == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		t[k] = s1[k];
	}
	l = 0;
	for (; k < (i + j); k++)
	{
		t[k] = s2[l];
		l++;
	}
	return (t);
}
