#include<stdio.h>
#include<main.h>
/**
 * main - entry point
 *
 * Return: always zero 
 *
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

int main(void)
{
	print_alphabet();
	return (0);
}
