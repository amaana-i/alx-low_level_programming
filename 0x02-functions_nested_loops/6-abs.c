#include "main.h"

/**
 * _abs- Function to print absolute value of an integer
 * @h: variable storing the  interger
 *
 * Return: Always h
 */

int _abs(int h)
{
	int i = h;
	int j;

	if (i < 0)
	{
		i = i * (-1);
	}
	j = i;
	return (j);
}
