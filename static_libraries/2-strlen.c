#include "main.h"
/**
*   _strlen - Returns the lenght of the string
*   * @s: string
*    * Return: len
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	s++;
	i++;
}
	return (i);
}
