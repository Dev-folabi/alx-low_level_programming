#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>


/**
* _strncpy - copies a string up to n bytes
*
* @dest: the destination string
* @src: the source string to be copied to the destination
* @n: the maximum number of bytes to be copied
*
* Return: a pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

