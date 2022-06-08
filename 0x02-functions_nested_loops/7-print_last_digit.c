#include "main.h"
/**
 * print_last_digit - to print the last digit of a number
 * @n: value to operate
 *
 * Return: always the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n > 0)
	{
		a = n % 10;
		_putchar(a + '0');
	}
	else
	{
		n =_abs(n);
		a = n % 10;
		_putchar(a + '0');
	}
	return (a);
}
