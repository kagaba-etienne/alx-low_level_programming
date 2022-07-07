#include "main.h"
/**
 * print_number - prints a number
 * @n: number to print
 *
 * Return: void
 */
void print_number(int n)
{
	int j;

	while (n >= 1000)
	{
		n -= 1000;
		j++;
		if (n < 1000)
		{
			_putchar(j - 1 + '0');
			n *= -1;
		}
	}
	while (n >= 100)
	{
		n -= 100;
		j++;
		if (n < 100)
		{
			_putchar(j - 1 + '0');
			n *= -1;
		}
	}
	while (n >= 10)
	{
		n -= 10;
		j++;
		if (n < 10)
		{
			_putchar(j - 1 + '0');
			n *= -1;
		}
	}
	while (n >= 0)
	{
		n -= 0;
		j++;
		if (n < 0)
		{
			_putchar(j - 1 + '0');
			n *= -1;
		}

	}
}
