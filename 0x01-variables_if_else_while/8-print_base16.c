#include <stdio.h>
/**
 *  main - Entry point
 *
 * Return: Always 0 (success)
 * 
 */
int main(void)
{
	int i;

	int d;

	i = 'a';

	d = 0;

	while (d < 10) 
	{
		putchar(d + '0');
		d++;
	}
	while (i <= 'f')
	{
		 putchar(i);
		 i++;
	}
	putchar('\n');
	return (0);
}
