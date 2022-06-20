#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to
 * memory area dest
 * @dest: destination address
 * @src: source address
 * @n: number of bytes
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
