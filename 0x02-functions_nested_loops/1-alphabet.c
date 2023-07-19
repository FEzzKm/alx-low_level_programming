#include "main.h"

/**
 *Description: print a to z utilizing putchar function
 * print_alphabet: prints alphabets using _putchar
 *
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
