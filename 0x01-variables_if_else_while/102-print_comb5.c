#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always zero
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					m = (i * 10) + j;
					n = (k * 10) + l;
					if (m < n)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
					}
					if (i == 57 && j == 56)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
