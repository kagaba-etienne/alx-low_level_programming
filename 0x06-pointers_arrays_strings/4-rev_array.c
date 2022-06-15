#include "main.h"
/**
 * reverse_array - to reverse content of array
 * @a: array to reverse
 * @n: number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j;
	int i;

	i = j / 2;
	for (j = 0; j < i; j++)
	{
		temp = *(a + j);
		*(a + j) = *(a + n - j);
		*(a + n - j) = temp;
	}
}
