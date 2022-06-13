#include "main.h"
/**
 * print_rev - print reverse of the string
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a;
	int j;

	a = strlen(s);
	for (j = a - 1; j >= 0 ; j++)
	{
		putchar(*(s + j));
	}
	putchar('\n');
}
