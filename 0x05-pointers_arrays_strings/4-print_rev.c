#include "main.h"
#include <unistd.h>
/**
* print_rev - Prints a string in reverse, followed by a new line.
*
* @s: Pointer to the string to print in reverse.
*
* Return: void.
*/

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
	write(STDOUT_FILENO, &s[i], 1);
	}

	write(STDOUT_FILENO, "\n", 1);
}
