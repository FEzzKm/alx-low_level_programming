#include <main.h>
#include <stdio.h>
/**
 * _strncpy - A function that copies a string
 *
 * @dest: pointer to destination
 * @src: pointer to source 
 * @n: bytes of @src
 *
 * Return: @dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
