#include "main.h"

/**
 * get_endianness - checks if a machine is little or big 
 *
 * Return: 0 big, 1 little
 */

int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}
