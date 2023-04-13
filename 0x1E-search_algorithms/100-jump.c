#include "search_algos.h"
/**
* print_info - helper func to print at each check
* @array: array
* @i: index before jump
* @j: index after jump
*/
void print_info(int *array, size_t i, size_t j)
{
	if (i == j)
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", i, j);
}

/**
* jump_search - find square root, jump steps to find match, end linear search
* @array: given array of ints
* @size: size of array
* @value: value to search for
* Return: index at which value's found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jumps = sqrt(size);
	size_t i = 0;
	size_t j = 0;

	if (!array)
		return (-1);
		while (j <= size)
		{
			if (j != 0)
			print_info(array, i, i);
			if (array[j] >= value)
		{
			print_info(array, i, j);
			while (i <= j)
			{
				print_info(array, i, i);
			if (array[i] == value)
				return (i);
					i++;
			}
				return (-1);
			}
			if (j + jumps + jumps > size)
			{
			print_info(array, j, j);
			print_info(array, j, j + jumps);
			while (j < size)
			{
				print_info(array, j, j);
			if (array[j] == value)
				return (j);
					j++;
			}
				return (-1);
			}
				i = j;
				j += jumps;
	}
	return (-1);
}
