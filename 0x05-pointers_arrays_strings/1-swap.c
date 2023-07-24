/**
 * swap_int - swaps the values of two integers
 *		using two input parameters
 *
 * @a: input par 1
 * @b: input par 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
