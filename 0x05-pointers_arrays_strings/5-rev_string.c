#include "main.h"
/**
 * rev_string - to reverse string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int b;
	int j;
	int temp;

	b = strlen(s);
	for (j = 0; j < b / 2; j++)
	{
		temp = *(s + j);
		*(s + j) = *(s + b - 1 - j);
		*(s + b - 1 - j) = temp;
	}
}
