#include "main.h"
/**
 * print_to_98 - to 98
 * @n: starting value
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	int j;

	for (j = n; j < 99; j++)
	{
		_putchar(j + '0');
		if (j != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	return (0);
}
