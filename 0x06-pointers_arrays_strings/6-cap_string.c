#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *str)
{
	int n;
	int i;
	int j;

	n = sizeof(str) / sizeof(char);
	k = 0;
	a = " \t\n,;.!?\"(){}";
	for (i = 0; i < n; i++)
	{
		if (i == 0 && isalpha(str[0]))
			toupper(str[0]);
		for (j == 0; j < 13; j++)
		{
			if (str[i] == a[j])
			{
				k = 1;
				break;
			}
			else
			{
				k = 0;
				break;
			}
		}
		if (k && i != n - 1)
			toupper(str[i + 1]);
		else
			continue;
	}
	return (str);
}
