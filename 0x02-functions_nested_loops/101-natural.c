#include <stdio.h>

/**
 * main - Printing all numbers below 1024 that are multiples of 3 or 5
 * Return: Returns 0 when successful
 */

int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x;
	}
	printf("%d\n", b);
	return (0);
}
