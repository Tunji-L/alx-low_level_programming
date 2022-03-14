#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print 0 to 9 and a to f
 *
 * Return: Always 0 (Success / correct)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		putchar(ch + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar(10);
	return (0);
}
