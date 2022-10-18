#include "main.h"
/**
*  _strcpy -  function that copies the string
*   * @src: pointer to the strign
*    * @dest: string copy destination
*     * Return: dest
**/
char *_strcpy(char *dest, char *src)
{
	char *copy = dest; /*storry pointer*/

	while ((*copy++ = *src++) != '\0') /*coy src into dest*/
		;
	return (dest);
}
