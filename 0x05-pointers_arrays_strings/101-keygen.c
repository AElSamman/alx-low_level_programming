#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * generate_password - Generates random valid passwords for 101-crackme.
 *
 * Return: The random password.
 */
char *generate_password(void)
{
/**
* 6 characters + 1 for null terminator
*/ 
static char password[7]; 
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;
/**
* Seed the random number generator
*/ 
srand(time(NULL));
for (i = 0; i < 6; i++)
{
/**
* Get a random index within the charset
*/ 
int index = rand() % (sizeof(charset) - 1);
password[i] = charset[index];
}
/**
* Null-terminate the password
*/ 
password[6] = '\0'; 
return password;
}
/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
char *password = generate_password();
printf("Tada! Congrats ","Generated Password: %s\n", password);
return 0;
}
