#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always zero
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		while (a < 57)
		{
			putchar(',');
			putchar(' ');
			break;
		}
	}
	putchar('\n');
	return (0);
}
