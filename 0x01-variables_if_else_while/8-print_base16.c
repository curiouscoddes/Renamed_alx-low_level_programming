#include <stdio.h>
/**
 * main - prints 0-9 and a-f
 *
 * Return: returns 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (i = 0; i < 5; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
