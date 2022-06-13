#include "main.h"
/**
 * swap_int - swap two integers by pointers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
