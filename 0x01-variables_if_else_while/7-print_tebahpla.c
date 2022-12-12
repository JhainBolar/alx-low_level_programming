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

	while(u >= 'a')
	{
		printf("%c", u);

		u--;
	}
	return (0);
}
