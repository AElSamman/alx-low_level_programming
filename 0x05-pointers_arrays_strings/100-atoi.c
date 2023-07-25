#include <stdio.h>
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 *
 * @s: The string to be converted.
 *
 * Return: The converted integer, or 0 if no numbers are found.
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
/* Check for overflow */
if (result > (INT_MAX - digit) / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + digit;
}
else if (result != 0)
{
/* Reached the end of the number */
break;
}
s++;
}
return (result *sign);
}
