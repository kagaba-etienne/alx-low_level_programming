#include "main.h"
/**
 * print_last_digit - to print the last digit of a number
 * @n: value to operate
 *
 * Return: always the last digit
 */
int print_last_digit(int n)
{
	_putchar(n % 10 + '0');
	return (n % 10);
}
