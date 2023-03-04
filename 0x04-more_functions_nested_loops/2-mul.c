#include "main.h"
#include <stdio.h>

/**
 * mul - Function to multiply two integers
 * @a: parameter 1
 * @b: parameter 2
 *
 * Return: always 0
 */

int mul(int a, int b)
{
	int product;

	product = a * b;
	printf("%d", product);
	return (0);
}
