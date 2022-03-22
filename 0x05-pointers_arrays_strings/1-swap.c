#include "main.h"
/**
 * swap_int - Swap a to b
 *
 * @n: Input variable
 * Return nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
