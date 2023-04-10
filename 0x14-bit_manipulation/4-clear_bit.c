#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @num_ptr: a pointer to the unsigned long integer to modify.
 * @index: the index of the bit to set to 0, indexed from 0 (LSB).
 *
 * Return: 1 if the operation was successful, or -1 if the index is invalid.
 */
int clear_bit(unsigned long int *num_ptr, unsigned int index)
{
	unsigned int mask;

	/* Check if index is valid */
	if (index > 63)
		return (-1);

	/* Create a mask with a 1 at the given index */
	mask = 1 << index;

	/* If the bit at the index is already 0, we don't need to do anything */
	if (!(*num_ptr & mask))
		return (1);

	/* Toggle the bit at the index to 0 using bitwise XOR */
	*num_ptr ^= mask;

	return (1);
}
