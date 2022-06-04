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

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (m = 0; m < 10; m++)
				{
					l = j + 1;
					if (i == k && j == l)
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56)
						break;
					putchar(',');
					putchar(' ');
					l += 1;
					l %= 57;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
