#include <stdio.h>

/**
 * main - printing the alphabet in lowercase followed by neww line
 * Return:0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
