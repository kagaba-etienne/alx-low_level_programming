#include<stdio.h>

/**
 * main - entry point
 *
 * Return: always zero
 */
int main(void)
{
	int i;
	char a;

	a = 'a';
	for (i = 48; ((i < 58) || (a != 'g')); i++)
	{
		if (i < 58)
		{
			putchar(i);
		}
		else
		{
			putchar(a);
			a++;
		}
	}
	putchar('\n');
	return (0);
}
