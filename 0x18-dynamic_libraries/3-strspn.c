#include "main.h"
/**
* _strspn - return length of string that matches values consistently
*
* @s: input
* @accept: input
*
* Return: Length of occurrence.
*
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}

