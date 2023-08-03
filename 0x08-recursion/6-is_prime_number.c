#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if n is prime
 * @o: int
 * @n: int
 * return 0 or 1
*/

int is_prime (int n, int o);
int is_prime_number (int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - check all int < n if prime
 * @n: int
 * @o: int
 * return int
*/

int is_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	else if (n % o == 0 || n <= 1)
		return (0);
	else
		return (is_prime(n, o + 1));
}
