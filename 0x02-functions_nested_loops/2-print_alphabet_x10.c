#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int duplicate;

	for (duplicate = 0; duplicate < 10; duplicate++)
	{
		int alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
