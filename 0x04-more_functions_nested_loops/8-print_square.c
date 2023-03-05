#include "main.h"

/**
 * print_square - Prints a # square
 *
 * @size: parametert for size of square
 *
 * Return: always 0
 *
 */

void print_square(int size)
{
	int r;
	int c;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (r = 0 ; r < size ; r++)
		{
			for (c = 0 ; c < size ; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
