#include <stdio.h>
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
int i = 0;
/**
 * Skip leading whitespace
 */
while (s[i] == ' ')
i++;
/**
 * Check for a sign
 */
if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}
/**
 * Convert the digits to integer
 */
while (s[i] >= '0' && s[i] <= '9')
{   
/**
 * Check for overflow
 */
if (result > (INT_MAX - (s[i] - '0')) / 10)
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
result = result * 10 + (s[i] - '0');
i++;
}
return result *sign;
}
