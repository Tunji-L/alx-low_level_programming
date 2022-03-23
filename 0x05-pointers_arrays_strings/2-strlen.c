#include "main.h"
/**
 * _strlen - Print the lenght of a string
 * @s: input array
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
