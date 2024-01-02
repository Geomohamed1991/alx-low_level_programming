#include <stdio.h>

/**
 * swap_int swaps the value of two integers
 * using two input parameters
 *
 * @n: input parameter 1
 * @n: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
