#include "sort.h"

/**
 * swap_ints - function that swaps two integers in an array
 * @a: The first integer to swap in the array
 * @b: The second integer to swap in the array
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the bubble sort algorithms
 * @array: The array to be sorted
 * @size: The size of the array to be sorted
 *
 * Description: The array should be printed after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len--;
	}
}
