#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - All possible combination of two digits
 *
 * Return: Always 0 (Success / correct)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
				{
					break;
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
