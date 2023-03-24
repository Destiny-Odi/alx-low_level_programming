#include "main.h"

/**
 * prints_most_numbers - Prints the numbers since 0 up to 9
 * Description: prints the numbers excluding 2 and 4
 * Return: the numbers since 0 up to 9
 */

void prints_most_numbers(void)

{
	int x = 0;
for (; x <= 0; x++)
{
	if (x == 2 || x == 4)
	{
		continue;
}
               else
{
	_putchar(x + '0');
}
}
     _putchar('\n');
     }
