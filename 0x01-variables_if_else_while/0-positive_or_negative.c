
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d", n, "%s\n", " is positive");
	else if (n < 0)
		printf("%d", n, "%s\n", " is negative");
	else
		printf("%d", n, "%s\n", " is zero");
	return (0);
}
