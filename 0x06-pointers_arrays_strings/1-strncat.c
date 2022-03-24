#include "main.h"
/**
 * _strncat - concatenate strings
 * @dest: first string
 * @src: second string
 * @n: number of second to concat
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && n != 0)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
		n--;
	}
	return (dest);
}
