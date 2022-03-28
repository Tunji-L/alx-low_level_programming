#include <stdio.h>
/**
 * main - fibonacci.c
 * Return: 0
 */
int main(void)
{
	int count;
	long int next, first = 1, second = 2;

	printf("%lu, %lu", first, second);
	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
