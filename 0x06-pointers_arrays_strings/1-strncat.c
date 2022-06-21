#include "main.h"
/**
 * _strncat - uses n bytes of src
 * @src: source text
 * @dest: destination text
 * @n: number of bytes
 *
 * Return: pointer to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
