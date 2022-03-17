#include "main.h"
/**
 * times_table - multiplication table from 1 to 9
 *
 */
void times_table(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			a = i * j;
			if (a >= 9)
			{
				_putchar(32);
				_putchar(a + 48);
			}
			else
			{
				_putchar((a / 10) + 48);
				_putchar((a % 10) + 48);
			}
		}
	}

}
