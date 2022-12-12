#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char u;

	u = 'z';

	while (u >= 'a')
	{
		putchar(u);

		u--;
	}
	putchar('\n');
	return (0);
}
