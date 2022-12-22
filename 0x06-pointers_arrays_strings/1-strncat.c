#include "main.h"
#include <stdio.h>

/**
*  _strncat - concatonate 2 strings
* @dest: first string
* @src: second string
* @n: number of bytes
* Return: a pointer pointing to the result
*/



char *_strncat(char *dest, char *src, int n)
{
int i;
int dest_len;
dest_len = 0;


while (dest[dest_len] != '\0')
{
dest_len++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
}
return (dest);
}
