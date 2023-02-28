#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
* main - Generate random valid passwords
*
* This program generates random passwords that comply with certain password
* complexity rules. Specifically, a password must be at least 8 characters
* long, contain at least one uppercase letter, one lowercase letter, and one
* digit, and not contain any whitespace characters.
*
* The program uses the rand() function to generate pseudo-random numbers, and
* then maps those numbers to valid ASCII characters to construct the password.
* The password is printed to standard output.
*
* Return: Always 0.
*/

#define PASSWORD_LENGTH 8

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	 const char *valid_chars =
	"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}\\|;:'\",.<>/?";

	const int num_valid_chars = strlen(valid_chars);

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = valid_chars[rand() % num_valid_chars];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}

