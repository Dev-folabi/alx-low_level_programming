#include "main.h"

/**
* _strcpy - Copies the string pointed to by src, including the
* terminating null byte (\0), to the buffer pointed to by dest.
*
* @dest: Pointer to the buffer to copy the string to.
* @src: Pointer to the string to copy.
*
* Return: Pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (start);
}

