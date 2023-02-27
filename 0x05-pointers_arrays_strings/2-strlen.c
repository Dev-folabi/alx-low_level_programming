#include "main.h"


/**
* _strlen - function.
*
* @s: Pointer to the string to find the length of.
*
* Return: Length of the string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
