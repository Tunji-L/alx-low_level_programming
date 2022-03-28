#include <stdio.h>
/**
 * main - fibonacci.c
 * Return: 0
 */
int main(void)
{
	int count, next, first = 1, second = 2;
	
	printf("%d, %d, ", first, second);
	for (count = 2; count <= 50; count++)
	{
		next = first + second;
		printf("%d", next);
		first = second;
		second = next;
		if (count < 50)
			printf("%s", ", ");
	}
	printf("\n");
	return (0);
}
