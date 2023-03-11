#include <stdio.h>

/**
* main - Prints the number of arguments passed into it
* @argc: The number of arguments
* @argv: An array of strings containing the arguments.
* Return: Always 0
*/

int main(int argc, char **argv)
{
	int i;

	printf("Number of arguments: %d\n", argc);
	for (i = 0; i < argc; i++)
	{
	printf("Argument %d: %s\n", i, argv[i]);
	}
	return (0);
}

