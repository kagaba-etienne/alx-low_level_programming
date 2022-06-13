#include "main.h"
/**
 * rev_string - to reverse string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int *a;
	int b;
	int j;

	b = strlen(*s);
	for (j = 0; j < b / 2; j++)
	{
		temp = *(a + j);
		*(a + j) = *(a + b - 1 - j);
		*(a + b - 1 - j) = temp;
	}
}
