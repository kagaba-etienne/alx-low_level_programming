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
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	int k;

	a = 0;
	b = 1;
	c = 2;
	d = 3;
	e = 4;
	f = 5;
	g = 6;
	h = 7;
	i = 8;
	j = 9;
	for (k = 0; k < 10; k++)
	{
		_putchar(a * k + '0');
		_putchar(b * k + '0');
		_putchar(c * k + '0');
		_putchar(d * k + '0');
		_putchar(e * k + '0');
		_putchar(f * k + '0');
		_putchar(g * k + '0');
		_putchar(h * k + '0');
		_putchar(i * k + '0');
		_putchar(j * k + '0');
		_putchar('\n');
	}
	return (0);
}
