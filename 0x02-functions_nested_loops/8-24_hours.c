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

	for (a = 0; a < 24; a++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}		
