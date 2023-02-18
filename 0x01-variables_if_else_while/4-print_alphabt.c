#include <stdio.h>

/**
 *main -Printing alphabets in lowercase except q and e
 *Return:0
*/
int main(void)
{
	char lc = 'a';

	while (lc <= 'z')
	{
		if (lc != 'e' && lc != 'q')
		{
			putchar(lc);
		}
		lc++;
	}
	putchar('\n');
	return (0);
}
