#include "main.h"
/**
 * _islower - this printa is lower and checks for lower case
 *
 * @c: parameter to be checked
 *
 * Return: 1 if it is a lower case
 * and 0 otherwise
 */

	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
