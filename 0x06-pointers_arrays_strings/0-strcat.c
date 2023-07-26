/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string where the src will be appended.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, const char *src)
{
    char *ptr = dest;

    // Move the pointer to the end of the destination string
    while (*ptr)
        ptr++;

    // Append the src string to the dest string
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Add the terminating null byte at the end of the concatenated string
    *ptr = '\0';

    return dest;
}
