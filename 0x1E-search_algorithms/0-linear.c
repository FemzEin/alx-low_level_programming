#include "search_algos.h"
/**
* linear_search - Linear search C implementation
* @array: The array to search through
* @size: The size of the array
* @value: The value to search for
*
* Return: The value or -1
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	return (-1);
	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	return ((int)i);
	}
	return (-1);
}
