#include "main.h"

/**
 * _isdigit - check for digits between 0 and 9
 *
 * @c: input number.
 *
 * Returns 1 if c is a digit or return 0 otherwise.
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

