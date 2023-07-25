#include <stdio.h>
/**
 * _atoi - Convert a string to an integer.
 * @s: Pointer to the string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int digit;
while (*s != '\0')
{
if (*s == '-')
sign = -sign;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
result = result * 10 + digit;
}
else if (result != 0)
{
/* Reached the end of the number */
break;
}
s++;
}
return (result * sign);
}
