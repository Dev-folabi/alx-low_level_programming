#include "main.h"

/**
* leet - encodes a string into 1337
* @str: the string to encode
*
* Return: the encoded string
*/
char *leet(char *str)
{
	char *replace = "aAeEoOtTlL";
	char *replace_with = "4433007711";
	int i, j;

	for (i = 0; str[i]; i++)
	{
	for (j = 0; replace[j]; j++)
	{
		if (str[i] == replace[j])
	{
		str[i] = replace_with[j];
		break;
	}
	}
	}

	return (str);
}

