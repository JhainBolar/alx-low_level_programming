#include "main.h"
#include <stdio.h>

/**
* _strlen - counts number of string in an array
*@s: input array
* Return: Always 0.
*/

int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
l = l + 1;
s++;
}
return (l);
}
