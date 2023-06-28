#include <stdio.h>
#include "sort.h"

/**
 * void_swap - swap elements in an array
 * @array: the array of the element
 * @size: the size of the elemnt
 */
void swap(int *array, size_t i, size_t j)
{
	    if (array[i] != array[j]) 
	    {
		            array[i] ^= array[j];
			            array[j] ^= array[i];
				            array[i] ^= array[j];
					        }
}
/**
 * bitonic_merge - perform bitonic merge operation
 * @array: the array
 * @size: the size
 */
void bitonic_merge(int *array, size_t size, int direction)
{
	    if (size > 1)
	    {
		            size_t stride = size / 2;
			            for (size_t i = 0; i < size - stride; i++)
				    {
					                if ((array[i] > array[i + stride]) == direction)
						       	{
								                swap(array, i, i + stride);
										                printf("Merging [%lu/%lu] (%s):\n", size, size, (direction == 1) ? "UP" : "DOWN");
												                print_array(array, size);
														            }
							        }
				            bitonic_merge(array, stride, direction);
					            bitonic_merge(array + stride, stride, direction);
						        }
}

/**
 * bitonic_sort_recursive - perfoem recursive operation
 * @direction: the direction
 * @size: the size
 * @array: the array
 */
void bitonic_sort_recursive(int *array, size_t size, int direction) {
	    if (size > 1) {
		            size_t stride = size / 2;
			            bitonic_sort_recursive(array, stride, 1);
				            bitonic_sort_recursive(array + stride, stride, 0);
					            bitonic_merge(array, size, direction);
						        }
}

/**
 * Bitonic_sort - sort the element 
 * @size: the size
 * @array: the array
 */
void bitonic_sort(int *array, size_t size) {
	    if (array == NULL || size < 2) {
		            return;
			        }

	        bitonic_sort_recursive(array, size, 1);
}

