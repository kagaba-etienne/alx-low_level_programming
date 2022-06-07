#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabets ten times
 *
 * Return: void no return
 */
void print_alphabet_x10(void)
{
	int i;
	char a;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 27; j++)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
