#include "main.h"
/**
 * puts_half - to print second half of the string
 * @str: string to print its half
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n;
	int b;
	int j;

	b = strlen(str);
	if (b % 2 == 1)
		n = (b - 1) / 2;
	else
		n = b / 2;
	for (j = n; j < b; j++)
		_putchar(str[j]);
	_putchar('\n');
}
