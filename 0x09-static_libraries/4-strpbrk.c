#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

/**
* _strpbrk - searches a string for any of a set of bytes* @s: the string to be searched
* @accept: the string of characters to search for
*
* Return: a pointer to the first occurrence of any character from `accept`
* in `s`, or NULL if no such character is found.
*/


char *_strpbrk(char *s, char *accept)

{

	return (strpbrk(s, accept));

}
