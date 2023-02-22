#include "main.h"

/**
 * _isalpha - Function to check alphabetic character
 *
 * @c: parameter to be checked
 * Return: 1 if c is a letter, lowercase or uppercase
 * and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 99 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
