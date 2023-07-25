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
    return length;
}

/**
 * print_rev_recursive - Helper function to print a string in reverse recursively.
 * @s: Pointer to the string to be printed in reverse.
 * @length: Length of the string.
 *
 * Return: void
 */
void print_rev_recursive(char *s, int length)
{
    if (length == 0)
    {
        putchar('\n');
        return;
    }

    putchar(s[length - 1]);
    print_rev_recursive(s, length - 1);
}

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
    int length = _strlen(s);
    print_rev_recursive(s, length);
}
