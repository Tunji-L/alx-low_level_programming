#include "main.h"
/**
 * print_times_table - multiplication table from 0 to n
 * @n: multiplication times
 */
void print_times_table(int n)
{
	int i, j, a;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);
				a = i * j;
				if (a <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(a + 48);
				}
				else if (a <= 99)
				{
					_putchar(32);
					_putchar((a / 10) + 48);
					_putchar((a % 10) + 48);
				}
				else
				{
					_putchar(((a / 10) / 10) + 48);
					_putchar(((a / 10) % 10) + 48);
					_putchar((a % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
