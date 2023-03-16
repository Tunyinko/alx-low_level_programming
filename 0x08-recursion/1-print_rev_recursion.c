#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 *  @s: parameter to hold string pointer
 *  Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\n')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
