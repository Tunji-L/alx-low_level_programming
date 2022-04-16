#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: Encoded String
 */
char *leet(char *str)
{
	int i, j, k;
	char U[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char N[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (str[j] == U[k])
				str[j] = N[k / 2];
		}
	}
	return (str);
}
