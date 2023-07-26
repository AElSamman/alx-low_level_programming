/**
 * _strcat - Concatenates two strings.
 *
 * @dest: The destination string where the src will be appended.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i = 0;

    // Find the length of the destination string
    while (dest[dest_len] != '\0')
        dest_len++;

    // Append the src string to the dest string
    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }

    // Add the terminating null byte at the end of the concatenated string
    dest[dest_len + i] = '\0';

    return dest;
}
