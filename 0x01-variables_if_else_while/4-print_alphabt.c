#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints all the aphabet except q and e
 *
 * Return: returns 0 (successful)
 *
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
