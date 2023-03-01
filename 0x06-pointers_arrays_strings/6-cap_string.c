#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @s: The input string.
*
* Return: A pointer to the resulting string.
*/
char *cap_string(char *s)
{
	int i, sep;
	static const char separators[] = " \t\n,;.!?\"(){}";

 /* Capitalize the first letter */
	if (s[0] >= 'a' && s[0] <= 'z')
	s[0] -= 'a' - 'A';

/* Loop through the rest of the string */
	for (i = 1; s[i] != '\0'; i++)
	{
	sep = 0;
/* Check if the current character is a separator */
	for (int j = 0; j < sizeof(separators); j++)
	{
		if (s[i] == separators[j])
		{
			sep = 1;
			break;
		}
	}
/* Capitalize the next letter after a separator */
	if (sep && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		s[i + 1] -= 'a' - 'A';
	}

	return (s);
}

