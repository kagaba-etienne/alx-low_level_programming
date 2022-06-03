
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
	if ((n % 10) > 5)
	{
		printf("%s", "Last digit of ", "%d", n);
		printf("%s\n", " is %d and is greater than 5", n % 10);
	}
	else if (((n % 10) < 6) && ((n % 10) != 0))
	{
		printf("Last digit of ", "%d", n);
		printf("%s\n", " is %d and is less than 6 and not 0", n % 10);
	}
	else
	{
		if ((n % 10) == 0)
			printf("Last digit of ", "%d", n, "%s\n", " is 0 and is 0");
	}
	return (0);
}
