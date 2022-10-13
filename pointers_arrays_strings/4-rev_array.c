#include "main.h"

/**
*  reverse_array - inverts the content of an array
*   @a: array
*     @n: numbers of elements of the array to swap
**/

void reverse_array(int *a, int n)
{
	int i, len;
	int aux[999];

	if (n <= 0)
	;
	else
	{
	for (i = 0; i < n; i++)
	aux[i] = a[i];
	for (i -= 1, len = i; i >= 0; i--)
	a[len - i] = aux[i];
}
}
