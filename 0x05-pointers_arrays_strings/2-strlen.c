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

	/* Loop until the null terminator is reached */
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
