#include "main.h"
/**
 * positive_or_negative - function to chec if number is positive or negative.
 *
 * @i: number to be tested.
 *
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
