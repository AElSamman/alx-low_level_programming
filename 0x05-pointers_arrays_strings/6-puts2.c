#include <stdio.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The input string.
 * Return: void
 */
void puts2(char *str)
{
/**Declare and initialize an integer variable i with the value 0*/
int i = 0; /**This will be used as an index to traverse the string*/
/** Start of the function implementation.*/
/** Check if the input string str is NULL.*/
if (str == NULL)
/**If it is, return early from the function*/
return;
/**
* Start of a while loop that will execute as long as the character
* at index i of the string str is not the null
* @'\0': null terminator 
*/
while (str[i] != '\0')
{
/**
* Print the character if it has an even index
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
/**After the loop finishes, print a newline character '\n'*/
/**to move to the next line and create a new line in the output*/
/** @'\n': newline character*/
putchar('\n');
}
