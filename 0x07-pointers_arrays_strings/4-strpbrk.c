#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to string to search
* @accept: pointer to string containing bytes to search for
*
* Return: a pointer to the first occurrence of any byte in accept in s, or NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
			for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return &s[i];
		}
	}

	return (NULL);
}

