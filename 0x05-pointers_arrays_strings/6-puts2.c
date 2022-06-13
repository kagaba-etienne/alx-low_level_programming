#include "main.h"
/**
 * puts2 - print characters of a string
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	char a;
	int b;
	int j;

	b = strlen(str);
	a = str[0];
	for (j = 0; j < b; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
