#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array of int
 * @size: size of arr
 * @action: function pointer to print
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
