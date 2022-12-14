#include "main.h"

/**
 * times_table - prints times table
 *
 * Return:void
 */

void times_table(void)
{
	for (int i = 0; i <= 9; i++) 
	{
	 int result = i * 9;
	 putchar(i + '0');
	 putchar('x');
	 putchar('9');
	 putchar('=');
	 if (result < 10)
	{
		putchar(' ');
	}
		putchar(result + '0');
	 	putchar('\n');
	}

}
