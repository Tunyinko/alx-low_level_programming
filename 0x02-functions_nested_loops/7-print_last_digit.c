#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 *
 * @a: Parameter used as the number
 *
 * Return: always r
 */

int print_last_digit(int a)
{
	int r;

	r = a % 10;
	if (a < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
