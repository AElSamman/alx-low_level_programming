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
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = _strlen(str);
int n = (length - 1) / 2;
int i;
for (i = n + 1; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
