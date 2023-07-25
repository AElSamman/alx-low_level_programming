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
static char password[7]; // 6 characters + 1 for null terminator
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
int i;
srand(time(NULL)); // Seed the random number generator
for (i = 0; i < 6; i++)
{
int index = rand() % (sizeof(charset) - 1); // Get a random index within the charset
password[i] = charset[index];
}
password[6] = '\0'; // Null-terminate the password
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
printf("Generated Password: %s\n", password);
return 0;
}
