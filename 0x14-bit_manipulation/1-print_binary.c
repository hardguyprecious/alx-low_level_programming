#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @num: the unsigned long integer to print in binary.
 *
 * Return: no return value.
 */
void print_binary(unsigned long int num)
{
	/* Check if the bit at position 0 is set */
	if (num >> 0)
	{
		/* Recursively print the binary representation of num divided by 2 */
		if (num >> 1)
			print_binary(num >> 1);
		/* Print the least significant bit of num */
		_putchar((num & 1) + '0');
	}
	else
	{
		/* If num is 0, simply print 0 */
		_putchar('0');
	}
}
