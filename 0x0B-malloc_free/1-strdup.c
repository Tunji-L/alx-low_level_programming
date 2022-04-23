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
	int i;

	if (str[0] == '\0')
		return (NULL);
	t = malloc(sizeof(*t) * sizeof(str));
	if (t == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
