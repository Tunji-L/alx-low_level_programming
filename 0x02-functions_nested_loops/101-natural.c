#include <stdio.h>
/**
 * main - multiples of 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i, j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			j += i;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}
