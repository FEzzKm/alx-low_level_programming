#include"main.h"

/**
 * main - entry
 *
 * description - print putchar
 *
 * return - always 0
 */

int  main()
{
	char str[] = "_putchar";
	int c;

	for (c=0;c<8;c++)
		_putchar(str[c]);
	_putchar('\n');
	

	return 0;
}
