#include "main.h"

/**
 * print_line - Function to print a line
 *
 * @n: Parameter that indicates the length of a line
 *
 * Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
