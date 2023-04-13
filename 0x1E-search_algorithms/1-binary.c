#include "search_algos.h"
/**
* binary_search - Binary Search algorithm
* @array: The array to search through
* @size: The size of the array
* @value: The value to search for
*
* Return: The index of the value or -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t mid;

	if (array == NULL)
	return (-1);
	while (first <= last)
	{
	printf("Searching in array: ");
	for (size_t i = first; i <= last; i++)
	printf("%d%s", array[i], i < last ? ", " : "\n");
	mid = (first + last) / 2;
	if (array[mid] == value)
	return ((int)mid);
	else if (array[mid] < value)
	first = mid + 1;
	else
	last = mid - 1;
	}
	return (-1);
}
