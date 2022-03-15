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
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
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
	}
	putchar(10);
	return (0);
}
