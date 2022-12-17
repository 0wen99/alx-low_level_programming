#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: destination to string
 * @src: source to string
 * @n: number of bytes used from scr
 *
 * Return: a pointer to the resulting string dest
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

