#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: uppercase
 */
char *string_toupper(char *str)
{
	int i, j;
	
	j = 0;
	while (*(str + j) != '\0')
		j++;
	for (i = 0; i < j; i++)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	}
	return (str);
}
