#include"main.h"

/**
 * main - Entry point
 *
 * Description:  prints putchar
 *
 * Return:  always 0 if success
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
