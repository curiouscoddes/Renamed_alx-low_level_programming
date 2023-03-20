#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main- Checks the last digit in a number
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ln = n % 10;

	if (ln > 5)
	{
		printf("Last digit of %d", n, " is %d", ln, " and is greater than 5\n");
	}
	else if (ln == 0)
	{
		printf("Last digit of %d", n, " is %d", ln, " and is 0\n");
	}
	else
	{
		printf("Last digit of %d", n, " is %d", ln, " and is less than 6
and is not 0\n");
	}

	return (0);
}
