#include <stdlib.h>
#include <time.h>
#includie <stdio.h>
/**
 * more headers goes there
 *
 * Return:0
 */
int main(void)
{
		int n;

			srand(time(0));
			n = rand() - RAND_MAX / 2;
			if (n % 10 > 5)
				printf("Last digit of %i is %i and is greater than 5\n", n, n % 10);
			else if (n % 10 == 0)
			printf("Last digit of %i is %i and is 0\n", n, n % 10);
			else if (n % 10 < 6)
				printf("Last digit of %i is %i ans is less 6 and not 0\n", n, n % 10);
			return (0);
}