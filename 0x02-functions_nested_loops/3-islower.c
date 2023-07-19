#include "main.h"
/**
 * _islower - function to check if
 *	c is lowercase
 *
 * Description: check input of function
 * 	if lowercase
 *
 * Return: returns 1 if so else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return 1;
	return 0;
}
