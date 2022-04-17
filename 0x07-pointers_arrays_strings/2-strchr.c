#include "main.h"
/**
 * _strchr - locates a substring.
 * @s: Input String.
 * @c: Input char.
 * Return: char address
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
