#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
int length = _strlen(s);
int i, j;  
char temp;
for (i = 0, j = length - 1; i < j; i++, j--)
{ 
/* Swap characters from the beginning and end of the string */
temp = s[i];
s[i] = s[j];
s[j] = temp;
}
}
