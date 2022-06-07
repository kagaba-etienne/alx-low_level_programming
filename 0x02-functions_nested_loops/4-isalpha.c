#include<ctype.h>
#include "main.h"
/**
 * _isalpha - checks if is alpha
 * @c: parameter to check
 *
 * Return: between 0 and 1
 */
int _isalpha(int c)
{
	if isalpha(c)
		return (1);
	else
		return (0);
}
