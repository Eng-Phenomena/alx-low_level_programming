#include "main.h"

/**
 * _strcat - concantes 2 strings
 * @dest: pointer char
 * @src: pointer char
 * @n: num
 * Return: appended strings
 */

char *_strcat(char *dest, char *src, int n)
{
        int i = 0, count = 0;

        while (dest[count] != '\0')
                count++;

        for (i = 0; src[i] != '\0' && i < n; i++)
        {
                dest[count] = src[i];
                count++;
        }
        dest[count] = '\0';

        return (dest);
}
