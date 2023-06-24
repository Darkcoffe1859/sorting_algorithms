#include <sort.h>
/**
 * bubble_sort - sorts an array of integers in ascending order by the 
 * use of buble sort algorithm
 * @array - The array to be sorted
 * @size - the size of the array to be sorted
 *
 * return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, size2 = size;
	int tmp, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size2; j++)
		{
			if (array[j - 1] > array[j])
			{
				flag = 1;
				tmp = array[j];
				array[j] = array[j - 1];
				array[j - 1] = tmp;
				print_array(array, size);
			}
		}
		if (flag == 2)
			break;
		flag = 2;
		size2--;
	}
}
