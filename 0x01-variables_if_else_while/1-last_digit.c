#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * n - contains displayed random number
 *
 * r - contains the last digit of the number
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int n;
	int r;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	r = n % 10;

	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5", n, r);
	else if (r == 0)
		printf("Last digit of %d is %d and is 0", n, r);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, r);
	return (0);
}
