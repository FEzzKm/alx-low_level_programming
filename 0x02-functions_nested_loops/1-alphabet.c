#include "main.h"

/**
 *
 * Description: prints the alphabet in lowercase followed by a new line
 *
 * print_alphabet - uses putchar to print a to z
 *
 *
 **/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
