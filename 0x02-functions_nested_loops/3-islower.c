#include "main.h"

/**
* _islower - main function
*
* @c: parameter to be printed
*
* Return: always 0
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
