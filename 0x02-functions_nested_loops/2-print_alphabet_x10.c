#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int c, j;

	for (j = 0; j < 10; ++j)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
