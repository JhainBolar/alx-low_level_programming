#include "main.h"
/**
* _puts - Printing a string in a new line
* @str: input string
* Return: Always 0.
*/

void _puts(char *str)
{
int n = 0;
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
