#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a parameter on each element
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array == NULL || action == NULL)
		return;
}
