#include <stdio.h>
/**
 * main - prints all single numbers below 10
 *
 * Return: returns 0 (success)
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
