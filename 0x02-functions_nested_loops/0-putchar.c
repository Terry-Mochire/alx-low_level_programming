#include "stdio.h"
/**
* main - prints _putchar on a new line
*
* return: Always 0 (success)
*
*/

int  main(void)
{
	int i;
	char p[] = "putchar";

		for (i = 0; i < 9; i++)
		{
			putchar(p[i]);
		}
	putchar('\n');
	return (0);
}
