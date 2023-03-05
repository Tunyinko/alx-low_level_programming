#include "main.h"
/**
 * swap_int - Function to swap two integers
 *
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
