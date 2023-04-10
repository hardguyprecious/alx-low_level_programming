#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one
 * number to another.
 * @num1: the first number to compare.
 * @num2: the second number to compare.
 *
 * Return: the number of bits that are different between the two numbers.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int num_bits_diff = 0;

	/* Compare each bit of num1 and num2 */
	for (; num1 || num2; num1 >>= 1, num2 >>= 1)
	{
		if ((num1 & 1) != (num2 & 1))
			num_bits_diff++;
	}

	return (num_bits_diff);
}

