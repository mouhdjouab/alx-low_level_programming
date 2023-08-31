#include "main.h"

/**
 * flip_bits - counts number bits to change
 *
 * @n: first number
 *
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, counter = 0;
	unsigned long int current;
	unsigned long int exclu = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclu >> k;
		if (current & 1)
			counter++;
	}

	return (counter);
}
