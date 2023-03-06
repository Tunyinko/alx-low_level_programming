#include "main.h"
#include <string.h>
/**
 * rev_string - A function that reverses a string
 * @s: A parameter for the string
 *
 * Return: always 0
 */

void rev_string(char *s)
{
	int len = strlen(s);
	char temp;
	int i;

	for (i = 0 ; i < len / 2 ; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
