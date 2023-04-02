#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table
 *
 * @n: function param
 *
 */

void print_times_table(int n)
{
	int i, j;

	for (i = n; i <= n; i++)
	{
		for (j = n; j <= n; i++)
		{
			printf("%d", i * j);
			if (j < n)
			{
				printf(", ");
			}

		}
	}
}
