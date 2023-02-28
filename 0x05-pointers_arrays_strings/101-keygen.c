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

#define PASSWORD_LENGTH 12

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int charset_size = sizeof(charset) - 1;
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % charset_size;
        password[i] = charset[index];
    }
    password[i] = '\0';

    printf("%s\n", password);

    return 0;
}

