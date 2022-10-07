#include "main.h"
/**
 *  * swap_int -  "swap_int" in some operating systems.
 *    @a: it s a value
 *    @b: its a value }
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
