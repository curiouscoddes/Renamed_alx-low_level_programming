#include <stdio.h>
/**
 * main - Print alphabet characters in lowercase
 *
 * Return: Always 0 a (success)
 *
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
