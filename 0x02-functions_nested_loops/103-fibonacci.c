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

	while (fib[i] < 4000000)
	{
		fib[0] = fib[1];
		fib[1] = fib[2];
		fib[2] = fib[0] + fib[1];
		if (fib[i] % 2 == 0)
			sum = sum + fib[i];
		i++;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
