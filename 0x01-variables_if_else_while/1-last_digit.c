#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print a random number
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int s:

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	prinf("Last digit of %d is %d", n, s);
	if (s > 5)
	{
		printf("and is greater than 5");
	}
	if (s == 0)
	{
		printf("and is 0");
	}
	if (s < 6 && s != 0)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
