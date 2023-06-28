#include "sort.h"
/**
 * getMax - to get the maximum value of an array
 * @array: The array
 * @size: the size of the array
 */

int getMax(int *array, size_t size)
{
	    int max = -1;
	        for (size_t i = 0; i < size; i++)
	       	{
			        if (array[i] > max)
			       	{
					            max = array[i];
						            }
				    }
		    return max;
}
/**
 * countg_sort - perform counting sort based on specific digit
 * @array: the array of the counting digit
 * @size: The size of the counting digit
 */
void countingSort(int *array, size_t size, int exp)
{
	    int *output = malloc(size * sizeof(int));
	        int count[10] = {0};

		    for (size_t i = 0; i < size; i++)
		    {
			            count[(array[i] / exp) % 10]++;
				        }

		        for (int i = 1; i < 10; i++) 
			{
				        count[i] += count[i - 1];
					    }

			    for (int i = size - 1; i >= 0; i--)
					    {
				            output[count[(array[i] / exp) % 10] - 1] = array[i];
					            count[(array[i] / exp) % 10]--;
						        }

			        for (size_t i = 0; i < size; i++) 
				{
					        array[i] = output[i];
						    }

				    free(output);
}

/**
 * radix_sort - to sort radix function
 * @array: the array of the radix function
 * @size: the size of the radix function
 */
void radix_sort(int *array, size_t size) 
{
	    if (array == NULL || size < 2)
	    {
		            return;
			        }

	        int max = getMax(array, size);

		    /* Performing counting sort for every digit */
		for (int exp = 1; max / exp > 0 *= 10)
		{
			countingsort(array, size, exp);
			print_array(array, size);
		}
}
