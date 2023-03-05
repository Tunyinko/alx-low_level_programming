#include "main.h"
/**
 * _strlen - Function to tell the length of s string
 * @s: Parameter for the string
 *
 * Return: always l
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
