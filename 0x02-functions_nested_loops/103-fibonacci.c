#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	long fib[3] = {1, 2, 3};
	long sum = 2;

	while (fib[2] < 4000000)
	{
		fib[0] = fib[1];
		fib[1] = fib[2];
		fib[2] = fib[0] + fib[1];
		if (fib[2] % 2 == 0)
			sum = sum + fib[2];
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
