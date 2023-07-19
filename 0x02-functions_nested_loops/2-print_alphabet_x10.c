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
	while (j<10)
	{
		for (c = 'a'; c <= 'z'; ++c)
			_putchar(c);
		_putchar('\n');
	}
}
