/*int_index - searches for an integer.
  * @array: Array of integers.
  * @size: Number of elements in the array.
  * @cmp: Pointer to the function to be used to compare values.
  *
  * Return: The index of the first element for which the cmp function does not
  * return 0.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}