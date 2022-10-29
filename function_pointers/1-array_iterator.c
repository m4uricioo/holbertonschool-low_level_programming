#include <stddef.h>
/**
  * array_iterator - executes a function given as a parameter on each element.
  * @array: Array of integer elements.
  * @size: Size of the array.
  * @action: Pointer to the function to execute.
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
