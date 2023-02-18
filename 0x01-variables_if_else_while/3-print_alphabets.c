#include <stdio.h>

/**
 * main -Printing alphabets both in lower and uppercase
 * Return:0
 */
int main(void)
{
	int lu;

	for (lu = 'a'; lu <= 'z'; lu++)
		putchar(lu);
	for (lu = 'A'; lu <= 'Z'; lu++)
		putchar(lu);
	putchar('\n');
	return (0);
}
