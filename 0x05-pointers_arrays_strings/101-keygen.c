#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Function to generate a random character from the valid character set*/
char getRandomCharacter() {
char validChars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
/*Excluding the null terminator*/
int numChars = sizeof(validChars) - 1;
int randomIndex = rand() % numChars;
return validChars[randomIndex];
}
/*Function to generate a random password of a given length*/
void generatePassword(int length) {
int i;
for (i = 0; i < length; i++) {
char randomChar = getRandomCharacter();
putchar(randomChar);
}
putchar('\n');
}
int main(void) {
int j;
/*Number of passwords to generate*/
int numPasswords = 10;
/*Length of each password*/
int passwordLength = 8;
/*Seed the random number generator using the current time*/ 
srand(time(0));
for (j = 0; j < numPasswords; j++) {
generatePassword(passwordLength);
}
return 0;
}

