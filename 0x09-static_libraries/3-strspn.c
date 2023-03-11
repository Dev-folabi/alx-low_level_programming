#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

/**
* _strspn - gets the length of a prefix substring
* @s: the string to be checked
* @accept: the string of accepted characters
*
* Return: the number of bytes in the initial segment of `s` which
* consists entirely of bytes from `accept`.
*/

unsigned int _strspn(char *s, char *accept)

{

	return (strspn(s, accept));

}
