#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
	char n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
_putchar('\n');
}
}
