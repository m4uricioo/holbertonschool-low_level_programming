#include <stdio.h>
/**
 * main - prints all single numbers of base 10
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	putchar((num % 10) + '0'); /* base 10 number from 9 to 9 , 0 is not a decimal number*/
				putchar('\n');
				return (0);
				}
