#include "main.h"

/**
 * print_alphabet - alphabet print in lowercase
 */
void print_alphabet(void)
{
	int duplicate;

	for (duplicate = 0; duplicate < 10; duplicate++)
	{
		int alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
