#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>


/**
* _strcpy - copies a string to a new buffer
*
* @dest: the destination buffer to copy the string to
* @src: the source string to be copied
*
* Return: a pointer to the destination buffer
*/
char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}

