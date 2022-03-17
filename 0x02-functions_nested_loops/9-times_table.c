#include "main.h"
/**
 *
 */
void times_table(void)
{
	int i, j, a;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (j == 10)
			{
				_putchar('\n');
			}
			else
			{
				a = i * j;
				_putchar(a + '0');
				_putchar(32);
				_putchar(32);
			}
		}
	}
}
