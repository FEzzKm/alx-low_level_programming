#include "main.h"

/**
 * _sqrt_recursion - a function that does the recursion bit
 *
 * @n : input number
 * @v : input value
 * Return: square root of @n or -1
 *
 * square - gives the square of @n
 *
*/
int square(int n, int v);
int _sqrt_recursion(int n)
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (square(n, 1));
}
int square(int n, int v)
{
	if ( v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, val + 1));
	else
		return (-1);
}
