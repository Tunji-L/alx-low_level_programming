#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of string to copy
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (*(src + i) != '\0' && i != n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
