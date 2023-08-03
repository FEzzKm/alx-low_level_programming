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
	return (square(n, 1));
}
/**
 * square - square root 
 * @n : int for sqrt root finding
 * @v : sqrt root
 * return int
 *
*/

int square(int n, int v)
{
	if ( v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, val + 1));
	else
		return (-1);
}
