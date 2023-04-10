#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @num: the unsigned long integer to extract a bit from.
 * @index: the position of the bit to extract, indexed from 0 (LSB).
 *
 * Return: the value of the bit at the given index (either 0 or 1),
 * or -1 if index is greater than the bit-width of num.
 */
int get_bit(unsigned long int num, unsigned int index)
{
	unsigned int i;

	/* Check if index is valid */
	if (num == 0 && index < 64)
		return (0);

	/* Iterate over each bit in num */
	for (i = 0; i <= 63; num >>= 1, i++)
	{
		/* If we have reached the index we want */
		if (index == i)
		{
			/* Extract and return the bit at the index */
			return (num & 1);
		}
	}

	/* If we get here, index is greater than the bit-width of num */
	return (-1);
}
