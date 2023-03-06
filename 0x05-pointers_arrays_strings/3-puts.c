#include "main.h"
#include <unistd.h>
/**
 * _puts - Function that prints a string
 * @str: Parameter to hold string
 *
 * Return: always 0
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
