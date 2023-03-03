#include "main.h"

/**
 * _abs - Checks for absolute value
 *
 * @a: Parameter to be checked
 *
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
