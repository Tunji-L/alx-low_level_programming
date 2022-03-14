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
	{
		putchar(ch + '0');
		if (ch == 9)
		{
			continue;
		}
		else
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
