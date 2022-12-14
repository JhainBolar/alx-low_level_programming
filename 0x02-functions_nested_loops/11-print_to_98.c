#include "main.h"
/**
 * print_to_98 - print to 98
 *
 * @n : number to start from
 *
 * Return:0 or 1
 * */

void print_to_98(int n)
{
	printf("%d", n);

	int i;

	for (i = n + 1; i <= 98; i++) 
	{
		printf(", %d", i);
	}

	printf("\n");
}
