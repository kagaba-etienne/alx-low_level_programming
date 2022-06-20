#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed
 * by s with the byte b
 * @s: pointer to string
 * @b: character
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
