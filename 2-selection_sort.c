#include <sort.h>

/**
 * selection_sort - sort an array in ascending order using the selection method
 * @size: The size of the array
 * @array: the array of the integer
 *
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int i = 0, j = 0, smallest = 0;
	int *swap = NULL;

	if (!array || size < 2)
		return;
	for (; i < size; i++)
	{
		smallest = i;
		swap =  malloc(sizeof(int) * 1);
		*swap = *(array + i);
		for (j = i + 1; j < size; j++)
		{
			if (*(array + j) < *(array + smallest))
			{
				smallest = j; 
			}
		}
		if (i < smallest)
		{
		*(array + i) = *(array + smallest);
		*(array + smallest) = *swap;
		free(swap);
		print_array(array, size);
		}
		else
			free(swap);
	}
}
