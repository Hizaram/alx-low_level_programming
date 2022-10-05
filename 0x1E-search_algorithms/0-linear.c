#include "search_algos.h"

/**
 * linear_search - Searches an array of ints using linear search algo
 * @array: Pointer to the first element of the array to be searched
 * @size: Number of elements in the array to be searched
 * @value: Value to be searched for
 *
 * Return: the value to be searched, otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	for (; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
