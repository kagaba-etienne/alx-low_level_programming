#include "main.h"
/**
 * leet - to translate the word
 * @str: string to translate into 1337
 *
 * Return: translated string
 */
char *leet(char *str)
{
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};
	int i;
	int j;

	j = 0;
	while (str[j])
	{
		for (i = 0; i < 5; i++)
		{
			if (toupper(str[j]) == a[i])
				str[j] = b[i];
		}
		j++;
	}
	return (str);
}
