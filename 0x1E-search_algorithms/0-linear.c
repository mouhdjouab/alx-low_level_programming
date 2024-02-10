#include "search_algos.h"

/**
 * linear_search - searches  val in array
 * integers using Linear search algo
 *
 * @array: input array
 * @size: size array
 * @value: value to search
 * Return: Always0
 */
int linear_search(int *array, size_t size, int value)
{
	int k;

	if (array == NULL)
		return (-1);

	for (k = 0; k < (int)size; k++)
	{
		printf("Value checked array[%u] = [%d]\n", k, array[k]);
		if (value == array[k])
			return (k);
	}
	return (-1);
}
