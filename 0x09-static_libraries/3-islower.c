#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

/**
* _islower - Checks if a character is lowercase.
*
* @c: The character to check.
*
* Return: 1 if 'c' is a lowercase letter, or 0 otherwise.
*/

int _islower(int c)

{
	return ((c >= 'a' && c <= 'z'));

}
