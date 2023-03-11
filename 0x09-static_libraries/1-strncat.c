#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

/**
* _strncat - concatenates two strings up to n bytes
*
* @dest: the destination string
* @src: the source string to be appended to the destination
* @n: the maximum number of bytes to be concatenated
*
* Return: a pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)

{

	return (strncat(dest, src, n));

}
