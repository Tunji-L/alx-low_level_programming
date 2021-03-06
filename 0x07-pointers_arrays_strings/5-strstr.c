#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: Input String.
 * @needle: Input Substring.
 * Return: Substring address
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*(haystack + i) != '\0' && (*(needle + j) != '\0'))
	{
		if (*(needle + j) == (*(haystack + i)))
		{
			i++;
			j++;

		}
		else
		{
			j = 0;
			i++;
		}
	}
	if (j == 0 && needle)
		return (haystack + (i - j));
	else if (j == 0)
		return ('\0');
	else
		return (haystack + (i - j));
}
