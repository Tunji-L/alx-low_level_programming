#include "main.h"
/**
 * main - Printing _putchar
 *
 * Return: The program should return 0
 */

int main(void)
{
	char s[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, size;

	size = sizeof(s) / sizeof(s[0]);
	/* size = sizeof(s) / sizeof(int)*/
	for (count = 0; count < size; count++)
		_putchar(s[count]);
	_putchar(10);
	return (0);
}
