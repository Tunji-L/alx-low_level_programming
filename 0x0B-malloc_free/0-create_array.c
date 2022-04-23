#include "main.h"
#include <stdlib.h>
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
	if (t == NULL)
		return (NULL);
	else if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
