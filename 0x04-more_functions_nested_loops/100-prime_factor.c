#include <stdio.h>
/**
 * main - largest prime factor of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long int j;
	long int i = 612852475143;

	while (i > 1)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				i = i / j;
				break;
			}
		}
	}
	printf("%ld ", j);
	printf("\n");
	return (0);
}
