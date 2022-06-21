#include<ctype.h>
#include "main.h"

/**
 * _islower - entry point
 *@c: parameter for checking
 *
 * Return: 0 and 1
 */
int _islower(int c)
{
	if islower(c)
		return (1);
	else
		return (0);
}
