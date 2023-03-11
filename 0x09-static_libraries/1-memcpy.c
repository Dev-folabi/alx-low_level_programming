#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>


/**
* _memcpy - copies n bytes from memory area src to memory area dest
*
* @dest: pointer to the destination memory area
* @src: pointer to the source memory area
* @n: the number of bytes to be copied
*
* Return: a pointer to the destination memory area @dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}

