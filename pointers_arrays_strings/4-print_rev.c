#include <stdio.h>
#include "main.h"
/**
 *  * print_rev - prints a string in reverse followed by a new line
 *   * @s: string to print
**/

void print_rev(char *s)
{
		int len = 0;
			int i;

				while (s[len] != '\0') /* calculates the string lenght */
						{
									len++;
										}
					for (i = len - 1; i >= 0; i--)
							{
										_putchar(s[i]);
											}
						_putchar('\n');
}
