#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Function that prints time tables
 * @n: A parameter that specifies the time table
 * Return: always 0
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if ((n >= 0) && (n < 15))
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0 ; j <= n ; j++)
			{
				k = i * j;
				if ((j < n) && (n < 10) && j != 0)
					printf(" %d, ", k);
				else if ((j < n) && (n > 9) && j != 0)
					printf("  %d, ", k);
				else if (j == 0)
					printf("%d, ", k);
				else if ((j == n) && (n < 10 && n > 3) && (k < 10))
					printf(" %d", k);
				else if ((j == n) && (n < 10 && n > 3) && (k >= 10))
					printf("%d", k);
				else if ((j == n) && (n >= 10) && (k < 10))
					printf("  %d", k);
				else if ((j == n) && (n >= 10) && (k > 10 && k < 100))
					printf(" %d", k);
				else
					printf("%d", k);
			}
			printf("\n");
		}
	}
}
