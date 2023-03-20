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
	int i;
	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
