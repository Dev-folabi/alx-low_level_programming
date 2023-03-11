#include <stdio.h>

/**
* main - Prints the name of the program
*
* Return: Always 0
*/
int main(void)
{
	char *program_name = __FILE__;

	printf("%s\n", program_name);
	return (0);
}

