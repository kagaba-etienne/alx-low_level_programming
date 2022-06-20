#include "main.h"
/**
 * _strchr - returns first ocurrence of the character c in the
 * string s, or NULL if the character is not found
 * @s: string to search
 * @c: character to search in its first occurence
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s)
	{
		if (*(s + i) == c)
			break;
		i++;
	}
	return (s + i - 1);
}
