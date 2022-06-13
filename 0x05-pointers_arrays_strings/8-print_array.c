#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: pointer
 * @n: variable
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (n > 0)
		{
			if (j != n - 1)
				printf("%d, ", a[j]);
			else
				printf("%d\n", a[j]);
		}
		else
		{
			_putchar('\n');
		}
	}
}
