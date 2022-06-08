#include "main.h"
/**
 * jack_bauer - every minute
 *
 * Return: always nothing
 */
void jack_bauer(void)
{
	int a;
	int j;
	int k;
	int l;

	for (a = 48; a < 51; a++)
	{
		for (j = 48; j < 57; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l < 57; l++)
				{
					_putchar(a);
					_putchar(j);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if (a == 2 && j == 3 && k == 5 && l == 9)
						break;
				}
			}
		}
	}
}
