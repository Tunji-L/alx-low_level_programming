#include "main.h"
/**
 * _islower - Check if character is in lower case
 *
 * @c: Input character
 *
 * Return: true - 1, false - 0;
 */
int _islower(int c)
{
	if (c <= 97 || c >= 122)
		return (0);
	else
		return (1);
}
