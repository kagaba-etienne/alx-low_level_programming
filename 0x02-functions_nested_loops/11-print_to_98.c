#include "main.h"
/**
 * print_to_98 - to 98
 * @n: starting value
 *
 * Return: always void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 100)
		{
			_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			n--;
		}
		else if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		else if (n >= 0)
		{
			_putchar(n + '0');
			n++;
		}
		else if (n > -10)
		{
			_putchar('-');
			_putchar(n + '0');
			n++;
		}
		else
		{
			_putchar('-');
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
