#include "main.h"

/**
*  * _pow_recursion - returns te value of x raised to the power of y
*   * @x: x
*    * @y: y
*     * Return: if y is lower than 0 returns -1
**/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y == 0)
	return (1);
	else if (y == 1)
	return (x);
	return (x * _pow_recursion(x, y - 1));
}

