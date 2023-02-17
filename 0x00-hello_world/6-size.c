#include <stdio.h>
/**
 * main - Printing data type sizes in C program
 *
 * Return:0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;

	printf("Size of a char: %d byte(S)\n", sizeof(char));
	printf("Size of an int: %d byte(S)\n", sizeof(int));
	printf("Size of a long int: %d byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(S)\n", sizeof(long long int));
	return (0);
}
