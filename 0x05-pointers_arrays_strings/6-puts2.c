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
	int h;

	b = strlen(str);
	a = str[0];
	for (j = 1; j < b; j++)
	{
		if (str[j] == a)
		{
			for (h = j; h < b; h++)
			{
				_putchar(h);
			}
			break;
		}
	}
}
