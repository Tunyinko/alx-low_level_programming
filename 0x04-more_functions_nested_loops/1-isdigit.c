#include "main.h"

/**
 * _isdigit - Function that checks for digit
 *
 * @c: Parameter to check if it is digit
 *
 * Return: 1 if it is digit
 * and 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
