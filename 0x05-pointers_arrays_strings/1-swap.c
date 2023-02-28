#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: 1st value.
 * @b: 2nd value.
 * Return: null.
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
	return 0;
}
