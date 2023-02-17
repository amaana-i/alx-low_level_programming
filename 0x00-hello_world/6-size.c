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
	float f;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(long long int));
	return (0);
}

