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
	char c;

	a = 'a';
	c = 'A';
	for (b = 0; b < 26; b++)
	{
		putchar(a);
		a++;
	}
	for (b = 0; b < 26; b++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
