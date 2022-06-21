#include "main.h"
/**
 * times_table - entry
 *
 * Return: always zero
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c < 10 && b == 0)
			{
				_putchar(c + '0');
			}
			else if (c < 10)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b == 9)
			{
				_putchar('\n');
				continue;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		b = 0;
	}
}
