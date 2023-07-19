#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *                 the alphabet a - z 10 times
 *
*/

void print_alphabet_x10(void)
{
	int c;
	int j;
	for (j = 0; j < 10; ++j)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
