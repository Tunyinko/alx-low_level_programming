#include "main.h"

/**
 * _islower - function to check lower case
 *
 * @c: parameter to check
 *
 * Return: 1 if successful
 * or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
