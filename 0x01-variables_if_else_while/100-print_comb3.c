#include <stdio.h>
/**
 * main - prints all possible combinations of two digits
 *
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 0; b <= 8; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 8 || b != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
