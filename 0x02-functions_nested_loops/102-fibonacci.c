#include <stdio.h>

/**
 *main- Printing the fibonacci sequence
 *
 * Return: Returns 0 when successul
 */

int main(void)
{
	int m;
	long int a1, a2, fn;

	a1 = 1;
	a2 = 2;
	printf("%ld, %ld", a1, a2);
	for (m = 0; m < 48; m++)
	{
		fn = a1 + a2;
		printf(", %ld", fn);
		a1 = a2;
		a2 = fn;
	}
	printf("\n");
	return (0);
}
