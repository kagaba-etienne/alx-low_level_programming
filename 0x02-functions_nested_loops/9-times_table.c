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
			_putchar(c + '0');
			if ((c + a) < 10 && b != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (b != 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
		b = 0;
	}
}
