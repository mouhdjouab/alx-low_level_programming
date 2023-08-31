#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: string for binary number
 *
 * Return:  converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int decinum = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		decinum = 2 * decinum + (b[k] - '0');
	}

	return (decinum);
}
