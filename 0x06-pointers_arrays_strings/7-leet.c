#include "main.h"
/**
 * leet - to translate the word
 * @str: string to translate into 1337
 *
 * Return: translated string
 */
char *leet(char *str)
{
	char *a;
	int *b;
	int n;
	int i;
	int j;

	a = {A, E, O, T, L};
	n = sizeof(str) / sizeof(char);
	b = {4, 3, 0, 7, 1};
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == a[i] || str[j] == tolower(a[i]))
				str[j] = b[i];
		}
	}
	return (str);
}
