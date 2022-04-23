#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: memory size
 * @c: initilaize char
 * Return: array of char
 */
char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(sizeof(*t) * size);
	if (*t == '\0')
		return (NULL);
	else if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
