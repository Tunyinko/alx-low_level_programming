#include "main.h"
#include <string.h>

/**
 * print_rev - Function to print a string in reverse
 *
 * @s: parameter to hold the reference of the string
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');

}
