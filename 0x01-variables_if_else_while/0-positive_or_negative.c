#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 *  main: starting point
 *
 * Description: if the number is 0; is positive
 * else if: the number is 0: is zero
 * else:if the number is less than 0: is negative
 * Return: 0 followed by new line
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
return (0);
}
