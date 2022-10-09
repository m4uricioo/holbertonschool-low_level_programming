#include "main.h"

/**
*   cap_string - capitalizes all words of a string
*    @str: string
*     Return: str
**/

char *cap_string(char *str)
{
	int i, j;
	char separators[] = ",;.!?\"(){} \t\n\0";

	for (i = 0; str[i]; i++)
	{
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] -= 32;
	for (j = 0; separators[j]; j++)
	if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
	str[i + 1] -= 32;
}
	return (str);
}
