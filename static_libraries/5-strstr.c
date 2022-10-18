#include "main.h"
#include <stddef.h>

/**
*  * _strstr - locates a substring
*   * @haystack: string
*    * @needle: string to be found
*     * Return: pointer to the beginning of the located substring or NULL
**/

char *_strstr(char *haystack, char *needle)
{
	int len, i, j;

	for (len = 0; needle[len]; len++)
		;
	len--;
	for (i = 0; haystack[i]; i++)
{
	for (j = 0; haystack[i] == needle[j]; i++, j++)
	if (j == len)

{
	i -= len;
																									return ((haystack + i));
																									}
}
	if (needle[0] == '\0')
	return (haystack);
	return (NULL);
}
