#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l_n = n % 10;

	if (l_n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l_n);
	else if (l_n == 0)
		printf("Last digit of %d is %d and is 0\n", n, l_n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_n);
	return (0);
}
