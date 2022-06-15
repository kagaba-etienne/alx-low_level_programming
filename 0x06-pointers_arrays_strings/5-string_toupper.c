#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @s: string with characters
 *
 * Return: character
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		*(s + i) = toupper(*(s + i));
		i++;
	}
	return (s);
}
