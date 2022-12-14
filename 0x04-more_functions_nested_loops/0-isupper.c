#include "main.h"

/**
 * _isupper - checks for upper case characters.
 * @c: An input character
 *
 * Return: 1 if c is an uppercase character.
 *
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

