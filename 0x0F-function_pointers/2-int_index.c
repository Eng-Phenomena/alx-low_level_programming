#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array of int
 * @size: size of arr
 * @cmp: function pointer
 * Return: index of number in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
