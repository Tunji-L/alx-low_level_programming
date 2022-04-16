#include "main.h"
#include <stdio.h>
/**
 *
 *
 */
char *string_toupper(char *str)
{
	long unsigned int i;

	for (i = 0; i < sizeof(str); i++)
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
	}

	return (str);
}
