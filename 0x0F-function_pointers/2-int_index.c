#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: pointer to an array of integers
 * @size: size of the array
 * @cmp: pointer to the function to use for comparison
 *
 * Return: index of the first element for which the cmp function does not
 * return 0, or -1 if no element is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
