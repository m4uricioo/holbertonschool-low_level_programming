#include "main.h"

/**
*   _strcat - appends the string in src to the one in dest
*   @dest: destination
*     @src: source
*     Return: dest
**/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; src[j]; j++, i++)
	dest[i] = src[j];
	src[j] = '\0';
	return (dest);
}
