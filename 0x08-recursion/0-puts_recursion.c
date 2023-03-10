#include "main.h"
/**
 * _puts_recursion - recursive function to print a string
 *
 * @s: parameter to point to a string
 *
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
