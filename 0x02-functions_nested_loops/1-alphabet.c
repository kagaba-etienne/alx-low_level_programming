#include<stdio.h>
#include"main.h"
/**
 * print_alphabet - fuction for alphabets
 *
 * Return: doe ont return anything
 */
void print_alphabet(void)
{
	char a;
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(a);
		a++;
	}
}

/**
 * main - entry
 *
 * Return: always zero
 */

int main(void)
{
	print_alphabet();
	return (0);
}
