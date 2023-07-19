#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @d: takes number input
 *
 * Return: lastDigit
*/

int print_last_digit(int d)
{
	int ld;

	if (d < 0)
		ld = -1 * (d % 10);
	else
		ld = d % 10;

	_putchar(ld + '0');
	return (ld);
}
