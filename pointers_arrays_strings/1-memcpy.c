#include "main.h"

/**
*  * _memcpy - copies n bytes from memory are src to memory area dest
*   * @dest: destination
*    * @src: source
*     * @n: number of bytes from memory are
*      * Return: dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

		if (n == 0)
		;
		else
		for (i = 0; i < n; i++)
		dest[i] = src[i];
		return (dest);
}
