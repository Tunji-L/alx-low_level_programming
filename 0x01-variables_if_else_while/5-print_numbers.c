#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success / correct)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
		printf("%d", ch);
	putchar(10);
	return (0);
}