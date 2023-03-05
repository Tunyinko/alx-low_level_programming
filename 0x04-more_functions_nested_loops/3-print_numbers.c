#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints from 1 to 10
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(i + '0');
	_putchar('\n');
}
