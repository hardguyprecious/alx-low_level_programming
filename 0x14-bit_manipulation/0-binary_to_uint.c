#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary string to convert.
 *
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1,
 *	or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;  /* the converted number */
	int len, base;    /* length of the binary string and the base value */

	if (!b)
		return (0); /* return 0 if b is NULL */

	ui = 0; /* initialize the converted number to 0 */

	/* get the length of the binary string */
	for (len = 0; b[len] != '\0'; len++)
		;

	/* iterate through each binary digit and update the converted number */
	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		/* if a non-binary digit is encountered, return 0 */
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		/* if the binary digit is 1, update the converted number */
		if (b[len] & 1)
		{
			ui += base;
		}
	}

	return (ui);
}
