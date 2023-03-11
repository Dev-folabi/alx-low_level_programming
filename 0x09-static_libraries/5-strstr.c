#include "main.h"

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

#include <string.h>

/**
* _strstr - Finds the first occurrence of the substring 'needle'
* in the string 'haystack'.
*
* @haystack: A pointer to the string to search.
* @needle: A pointer to the substring to search for.
*
* Return: A pointer to the first occurrence of 'needle'
*in 'haystack', or NULL if 'needle' is not found.
*/
char *_strstr(char *haystack, char *needle)
{
    return (strstr(haystack, needle));
}

