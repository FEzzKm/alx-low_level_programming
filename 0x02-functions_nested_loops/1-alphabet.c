#include "main.h"

/**
 *
 * print_alphabet: prints alphabets using _putchar
 * from a to z
 *
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
