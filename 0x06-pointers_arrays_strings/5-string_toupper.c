#include "main.h"
/**
 * string_toupper - changes lowercase to uppercase
 * @str: string with characters
 *
 * Return: character
 */
char *string_toupper(char *str)
{
	int n;
	int i;

	n = sizeof(str) / sizeof(char);
	for (i = 0; i < n; i++)
	{
		if (islower(str[i]))
			toupper(str[i]);
	}
	return (str);
}
