#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @num_ptr: a pointer to the unsigned long integer to modify.
 * @index: the index of the bit to set to 1, indexed from 0 (LSB).
 *
 * Return: 1 if the operation was successful, or -1 if the index is invalid.
 */
int set_bit(unsigned long int *num_ptr, unsigned int index)
{
	unsigned int mask;

	/* Check if index is valid */
	if (index > 63)
		return (-1);

	/* Create a mask with a 1 at the given index */
	mask = 1 << index;

	/* Set the bit to 1 using bitwise OR */
	*num_ptr = (*num_ptr | mask);

	return (1);
}

