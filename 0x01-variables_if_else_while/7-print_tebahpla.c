#include <stdio.h>
/**
 * main - prints alphabets in reverse
 *
 * Return: returns 0 (success)
 *
 *
 */
int main(void)
{
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
