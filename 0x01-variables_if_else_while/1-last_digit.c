#include <stdlib.h>
#include <time.h>
/**
 *
 *  main - Entry point
 *
 *
 *
 *  Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("last of digit of %d is %d and is greater than 5\n" n, m);
	}
	else if (l == 0)
	{
	printf("last of digit of %d is %d and is == 0", n, m);
	}
	else
	{
		printf("last of digit of %d is %d and is less than 6", n, m);
	}
	return (0);
}

