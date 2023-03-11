#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>


/**
* _strchr - locates the first occurrence of character @c in string @s
*
* @s: pointer to the string to be searched
* @c: the character to be located
*
* Return: a pointer to the first occurrence of the character @c in the string @s,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

