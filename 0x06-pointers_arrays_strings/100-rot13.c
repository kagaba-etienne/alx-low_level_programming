#include "main.h"
/**
 * rot13 - to rotatee the string 13 places
 * @chr: pointer to string to rotate
 *
 * Return: pointer to the ratated string
 */
char *rot13(char *chr)
{
	char alphab[] = "abcdefghijklmnopqrstuvwxyz";
	int j;
	char *ptr;
	int x;
	int size;

	size = strlen(chr);
	for (j = 0; j < size; j++)
	{
		x = 13;
		ptr = strchr(alphab, *(chr + j));
		if ((ptr - alphab) > 13)
			x = (ptr - alphab) - 13;
		*(chr + j) = *(ptr + x);
	}
	return (chr);
}
