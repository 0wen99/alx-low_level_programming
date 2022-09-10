#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char ch;

for (n = 48; n < 58; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
