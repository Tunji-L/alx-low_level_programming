#include "main.h"
/**
 * swap_int - Swap a to b
 *
 * @a: Input variable 1
 * @b: Input variable 2
 * Return nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
