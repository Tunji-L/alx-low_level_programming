#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverse a String
 * @s: Input string
 *
 */
void rev_string(char *s)
{
	int len, i, j;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len / 2 ; i++)
	{
		j = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = j;
	}
}
