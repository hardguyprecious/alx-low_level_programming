#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary string.
 *
 * Return: converted number, or 0 if b is NULL or
 * contains an invalid character.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int base = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	len--;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			result += base;

		base *= 2;
		len--;
	}

	return (result);
}
