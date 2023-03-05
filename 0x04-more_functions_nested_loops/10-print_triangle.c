#include "main.h"
/**
 * print_triangle - Function to print triangle
 *
 * @size: parameter for triangle size
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= i ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
