#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - to 98
 * @n: starting value
 *
 * Return: always void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d", n);
			n--;
		}
		else
		{
			printf("%d", n);
			n++;
		}
		printf(", ");
	}
	printf("%d\n", n);
}
