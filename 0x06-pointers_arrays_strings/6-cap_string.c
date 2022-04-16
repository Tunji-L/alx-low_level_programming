#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: String
 * Return: Capitalizad string
 */
char *cap_string(char *str)
{
	int i, j, k;
	int sep[] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	j = 0;

	while (str[j] != '\0')
		j++;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;

	for (i = 0; i < j; i++)
	{
		for (k = 0; k < 13; k++)
		{
			if (str[i] == sep[k] && (str[i + 1] >= 97 && str[i + 1] <= 122))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
