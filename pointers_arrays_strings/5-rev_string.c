#include <stdio.h>

/**
*  * rev_string - reverses a string
*   * @s: string to be reversed
**/

void rev_string(char *s)
{
	char aux[999];
	int i, size;

	for (i = 0; s[i]; i++)
	aux[i] = s[i];
	for (i -= 1, size = i; i + 1; i--)
	s[size - i] = aux[i];
}
