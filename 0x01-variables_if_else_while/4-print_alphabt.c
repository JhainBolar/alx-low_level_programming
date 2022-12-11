#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{

	char s;

	for (s = 'a'; s <= 'z'; s++)

	{

	if ( s == 'q' || s == 'e'){
	
		continue;

	}
		putchar(s);


	}
	printf("\n");

	return(0);


}
