#include <sort.h>
/**
 * print_array - print an array
 * @size: size of the array
 */

void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * selection_sort - sort an array of integer in ascending order 
 * using selection sort algorithm
 * @array: the array of the sorted integer
 * @size: size of the sorted array
 */

void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;

    for (i = 0; i < size - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx])
                min_idx = j;
        }
        if (min_idx != i) {
            swap(&array[i], &array[min_idx]);
            print_array(array, size);
        }
    }
}
