#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	char a;
	int b;

	a = 'z';
	for (b = 0; b < 26; b--)
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
