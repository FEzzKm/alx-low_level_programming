#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int c;
	printf("%s\n", argv[0]);

	if(argc > 1)
	{
		for (c = 1; c < argc ,c++)
		{
			printf("argv[%d] = %s\n", c ,argv[c]);
		}
	}
	else
	{
		printf("no args \n");
	}
	return (0);
}
