#include <stdio.h>
/**
 * main - Even Liber Abbaci
 * Return: 0
 */
int main(void)
{
	long int next = 0, first = 1, second = 2, sum = 2;

	while (next <= 4000000)
	{
		next = first + second;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			sum += next;
		first = second;
		second = next;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
