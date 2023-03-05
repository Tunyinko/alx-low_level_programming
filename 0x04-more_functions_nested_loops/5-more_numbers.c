#include "main.h"
/**
 * more_numbers - Function to print group 10 times
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 11 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
