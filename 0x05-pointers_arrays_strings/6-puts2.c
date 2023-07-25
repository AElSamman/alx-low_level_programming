#include <stdio.h>
/**
 * puts2 - Prints every other character of a string, starting with the first character.
 *
 * @str: The input string.
 */
void puts2(char *str)
{
int i = 0;
if (str == NULL)
return;
while (str[i] != '\0')
{
/**
*  Print the character if it has an even index
*/ 
if (i % 2 == 0)
putchar(str[i]);
i++;
/**
* Handle long strings that exceed the index range of int
*/
if (i == 0)
break;
}
putchar('\n');
}
