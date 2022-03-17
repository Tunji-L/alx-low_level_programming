#include "main.h"
/**
 * _islower - Check if character is alpha
 *
 * @c: Input character
 *
 * Return: true - 1, false - 0;
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
