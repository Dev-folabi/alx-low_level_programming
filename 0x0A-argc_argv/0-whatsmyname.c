#include <stdio.h>

/**
* main - Prints the name of the program
*
* Return: Always 0
*/
int main(void)
{
	char *mynameis = __FILE__;

	printf("%s\n", mynameis);
	return (0);
}

