#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: returns 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((int i));
	}
	putchar('\n');
	return (0);
}
