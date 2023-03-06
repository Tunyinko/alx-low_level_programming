#include "main.h"
#include <string.h>
/**
 * puts2 - Function to print every other character
 *
 * @str: Parameter for the string
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0 ; i < len ; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
