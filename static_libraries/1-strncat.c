#include "main.h"

/**
*   _strncat - appends the string in src to the one in dest
*    @dest: destination
*     @src: source
*      @n: n characters to print
*       Return: dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (dest[0] == '\0' || src[0] == '\0')
	return (dest);
	else if (n > 0)
{
	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; j < n; j++, i++)
	dest[i] = src[j];
	dest[i] = '\0';
}
	return (dest);
}
