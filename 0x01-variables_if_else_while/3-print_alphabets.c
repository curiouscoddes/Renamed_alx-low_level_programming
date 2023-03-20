#include <stdio.h>
/**
 * main - prints Alphabet in lower case then in UPPER case
 *
 * Return: Always (0) a (Success)
 *
 */
int main(void)
{
	char UPPER[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lower[i]);
		putchar(UPPER[i]);
	}
	putchar('\n');
	return (0);
}
