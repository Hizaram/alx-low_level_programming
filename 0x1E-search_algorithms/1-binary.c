#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array
 * @low: index of the first element of the array to print
 * @high: index of the last element of the array to print
 */

void print_array(int *array, int low, int high)
{
	if (array != NULL)
	{
		printf("Searching in array: ");
		for (; low <= high; low++)
		{
			printf("%d", array[low]);
			if (low != high)
				printf(", ");
		}
		printf("\n");
	}
}

/**
 * rec_bsearch - Searches an array of integers recursively
 * @array: Pointer to the first element of the array to be searched
 * @low: index of the first element of the array to be searched
 * @high: index of the last element of the array to be searched
 * @value: Value to be searched for in the array
 *
 * Return: index where value is found, otherwise -1
 */

int rec_bsearch(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	mid = (high - low) / 2 + low;

	if (array[mid] == value)
		return (mid);
	if (high - low == 0)
		return (-1);
	else if (array[mid] > value)
	{
		if (high - low == 1)
			mid = low;
		return (rec_bsearch(array, low, mid, value));
	}
	else
	{
		if (high - low == 1)
			mid = high - 1;
		return (rec_bsearch(array, mid + 1, high, value));
	}
}


/**
 * binary_search - Searches an array of integers using binary search algo
 * @array: Pointer to the first element of the array to be searched
 * @size: Size of the array to be searched
 * @value: Value to be searched for in the array
 *
 * Return: index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (int)size;

	return (rec_bsearch(array, low, high - 1, value));
}
