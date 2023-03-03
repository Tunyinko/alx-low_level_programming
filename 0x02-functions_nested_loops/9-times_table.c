#include "main.h"
#include <stdio.h>

/**
 * times_table - function to generate times table
 *
 * Return: always 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k = i * j;
			if (j != 9)
			{
				if (k > 9)
				{	_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(k + '0');
					}
					else if (j == 0)
						_putchar(k + '0');
				}
				_putchar(',');
				_putchar(' ');
			}
			else if (j == 9)
			{
				if (k > 9)
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(k + '0');
				}
			}
		}
		_putchar('\n');
	}
}
