#include<stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	float b;
	long int c;
	long long int d;
	char e;

	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(e));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(b));
	return (0);
}
