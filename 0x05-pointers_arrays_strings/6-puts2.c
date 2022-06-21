#include "main.h"
/**
 * puts2 - print characters of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int b;
	int j;

	b = strlen(str);
	for (j = 0; j < b; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
