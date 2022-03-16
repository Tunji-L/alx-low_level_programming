#include "main.h"
/**
 * _islower - Check if character is in lower case
 * 
 * Return: true - 1, false - 0;
 */
int _islower(int c)
{
	int str;

	if (c <= 97 || c >= 122)
		return (0);
	else
		return (1);
}
