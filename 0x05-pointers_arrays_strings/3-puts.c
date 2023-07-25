#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string to be printed.
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	/* Loop until the null terminator is reached */
	while (str[i] != '\0')
	{
		/* Write each character to the standard output */
		write(1, &str[i], 1);
		i++;
	}

	/* Write a new line character to the standard output */
	write(1, "\n", 1);
}
