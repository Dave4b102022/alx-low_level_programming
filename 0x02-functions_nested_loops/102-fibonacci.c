#include <stdio.h>
/**
  * main - prints the first 50 fibonacci numbers, starting with 1 and 2,
  *
  * Return: Always (0)
  */

int main(void)
{
	int i;
	unsigned long fib, prevFib, prev2Fib;

	prevFib = 1, prev2Fib = 0;

	for (i = 0; i < 50; i++)
	{
		fib = prevFib + prev2Fib;
		printf("%lu", fib);

		prev2Fib = prev2Fib;
		prevFib = fib;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
