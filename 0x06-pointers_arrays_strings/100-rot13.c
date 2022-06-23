#include "main.h"
/**
 * rot13 - Encryption with rot13 method
 * @s: Input string
 * Return: Encrypted string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 65 && s[i] <= 77) || (s[i] >= 97 && s[i] <= 109))
			s[i] = (s[i] + 13);
		else if ((s[i] >= 78 && s[i] <= 90) || (s[i] >= 110 && s[i] <= 122))
			s[i] = s[i] - 13;
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
