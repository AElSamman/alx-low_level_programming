#include <stdio.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The input string.
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
if (str == NULL)
return;
while (str[i] != '\0')
{
if (i % 2 == 0)
putchar(str[i]);
i++;
if (i == 0)
break;
}
putchar('\n');
}
