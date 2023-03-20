#include <stdio.h>
/**
 * main - prints all possible combinations of 3 digit
 *
 * Return: returns 0 (success)
 *
 *
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 8; b++)
		{
			for (c = 2; c < 8; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 5 || b != 6)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
