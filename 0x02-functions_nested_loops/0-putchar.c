#include "main.h"

/**
 * main -prints _putchar
 *
 * Descripyion: prints _putchar
 *
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char text[7] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}

