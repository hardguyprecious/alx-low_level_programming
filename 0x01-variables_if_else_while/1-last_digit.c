#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point of program to print last digit of raandom word.
 *
 * Return: 0 if code runs successfully.
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	z = n % 10;
	if (z > 5)
		printf("Last digit of %d is %d and is greater than 6", n, m);
	else if (z == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (z < 6 && z != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);
	printf("\n");
	return (0);
}
