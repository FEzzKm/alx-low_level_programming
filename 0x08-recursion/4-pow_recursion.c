/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
 *
 * Description: returns the value of x raised by pow y
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
