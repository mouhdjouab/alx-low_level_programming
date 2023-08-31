#include "main.h"

/**
 * get_bit - returns value of bit in decimal number at giving index
 *
 * @n: number to search
 *
 * @index: index of bit
 *
 * Return: value bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitnumber;

	if (index > 63)
		return (-1);

	bitnumber = (n >> index) & 1;

	return (bitnumber);
}
