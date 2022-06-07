#include "main.h"
/**
 * print_alphabet - fuction for alphabets
 *
 * Return: doe ont return anything
 */
void print_alphabet(void)
{
	char a;
	int i;

	a = 'a';
	for (i = 0; i < 26; i++)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

/**
 * main - entry
 *
 * Return: always zero
 */

int main(void)
{
	print_alphabet();
	return (0);
}
