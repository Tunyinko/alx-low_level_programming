#include "main.h"

/**
 * _isupper - function that checks for upper cases
 *
 * @c: Parameter to hold character value
 *
 * Return: 1 if the character is upper
 * and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
