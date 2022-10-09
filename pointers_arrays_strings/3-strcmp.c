#include "main.h"
#include <stdio.h>
/**
*   _strcmp - appends the string in src to the one in dest
*    @s1: string 1
*     @s2: string 2
*      Return: dif
**/

int _strcmp(char *s1, char *s2)
{
	int dif;
	int i;

	i = 0;
	dif = 0;
	for (; s1[i] || s2[i]; i++)
	{
	dif = (s1[i] - s2[i]);
	if (dif != 0)
	break;
}
	return (dif);
}
