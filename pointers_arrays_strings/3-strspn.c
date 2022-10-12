#include "main.h"

/**
*  * _strspn - returns the number of bytes in the initial segment of s which
*   * which consists only of bytes from accept
*    * @s: string
*     * @accept: characters
*      * Return: number of bytes that match
**/

unsigned int _strspn(char *s, char *accept)
{
	int i, x, count;

	count = 0;
	for (i = 0; s[i] != 32; i++)
	for (x = 0; accept[x]; x++)
	if (s[i] == accept[x])
	count++;
	return (count);
}
