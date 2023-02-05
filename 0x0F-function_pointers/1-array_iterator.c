#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This is a function given as a parameter
 * @array: array to iterate over
 * @size: this is the size of an array
 * @action: a pointer to the function used
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
