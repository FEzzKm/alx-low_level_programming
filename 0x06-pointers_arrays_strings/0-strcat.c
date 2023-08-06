#include "main.h"
#include <stdio.h>
/**
 * _strecat - function to concatenate
 * 	two strings
 * @dest: destination pointer
 * @src: source pointer
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;
	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b]; b++)
		dest[a++] = src [b];
	return (dest);
}
