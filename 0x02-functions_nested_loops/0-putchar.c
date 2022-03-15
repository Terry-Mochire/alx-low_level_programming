#include "stdio.h"
/**
* main - prints _putchar with a new line
*
* return: Always 0
*
*/

int main(void)
{
	int i;
	char p[] = "_putchar";

		for (i = 0; i < 8; i++)
		{
			_putchar(p[i]);
		}
	_putchar('\n');
	return (0);
}
