#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *t;
	int h, i, count;

	for (h = 0; str[h] != '\0'; h++)
		count++;

	if (str == NULL)
		return (NULL);
	t = malloc(sizeof(*t) * count);
	if (t == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
