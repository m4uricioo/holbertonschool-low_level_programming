#include "main.h"

/**
*  * extra - extra function to solve the previous
*   * @num: number
*    * @guess: guess
*     * Return: -1 in error
**/

int extra(int num, int guess)
{
	int square;

	square = guess * guess;
	if (square == num)
	return (guess);
	else if (square < num)
	return (extra(num, (guess + 1)));
	else
	return (-1);
}
