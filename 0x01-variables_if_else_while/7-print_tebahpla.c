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
	char alp;

	for (alp = 'z'; alp < 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
