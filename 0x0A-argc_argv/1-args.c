#include <stdlib.h>
#include <stdio.h>

/**
 * main- a program that prints number of args
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}

	printf("%s\n", m);
	return (0);
}
