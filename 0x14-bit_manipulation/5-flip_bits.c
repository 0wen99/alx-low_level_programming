#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits you would need to flip
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, nflips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			nflips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (nflips);
}

