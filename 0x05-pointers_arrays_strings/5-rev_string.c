#include "main.h"
#include <stdio.h>
/**
* rev_string - prints a string in reverse
* @s: input string
* Return: Always 0.
*/

void rev_string(char *s)
{
int l;
char t;
int i;
l = 0;
while (s[l] != 0)
{
l++;
}

for (i = 0; i < l / 2; i++)
{
t = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = t;
}
}
