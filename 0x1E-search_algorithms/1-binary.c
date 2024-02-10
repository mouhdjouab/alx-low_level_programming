#include "search_algos.h"

/**
  * bin search - searche val  in sorted array
  * @array:  pointer to first element of  array to
  * @size: number of elements inarray
  * @value: The value to search fo
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  */
int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}
