#include "sort.h"

/**
 * partition - Helper function to perform the partition step in QuickSort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 *
 * Return: The index of the pivot element after partitioning.
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j, temp;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i = i + 1;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	print_array(array, size);

	return (i + 1);
}

/**
 * quick_sort_helper - Helper function to recursively perform QuickSort.
 *
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 */
void quick_sort_helper(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pi = partition(array, size, low, high);

		quick_sort_helper(array, size, low, pi - 1);

		quick_sort_helper(array, size, pi + 1, high);
	}

}


/**
 * quick_sort - Main function to perform QuickSort on an array.
 *
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
		quick_sort_helper(array, size, 0, size - 1);
}

