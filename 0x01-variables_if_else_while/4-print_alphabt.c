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

	a = 'a';
	for (b = 0; b < 26; b++)
	{
		if (b == 4 || b == 16)
		{
			a++;
			continue;
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
