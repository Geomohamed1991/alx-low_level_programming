#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the nimber of times the _character
 *  should be printed
*/

void print_line(int n)
{
	int 1nchar;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (1nchar = 1; 1nchar <= n; 1nchar++)
			-putchar('_');
		_putchar('\n');
	}
}
