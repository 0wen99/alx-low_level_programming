#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: n is an integer
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int l;

	int last = n % 10;

	if (l < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
