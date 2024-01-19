#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick
 * sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: void
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	recursion_quick_sort(array, 0, size - 1, size);
}

/**
 * recursion_quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @arr: array to be sorted
 * @start: start index of the array
 * @end: end index of the array
 * @size: size of arr
 * Return: void
*/
void recursion_quick_sort(int *arr, int start, int end, size_t size)
{
	if (start < end && start >= 0)
	{
		int pivot_index = partition(arr, start, end, size);

		recursion_quick_sort(arr, start, pivot_index - 1, size);
		recursion_quick_sort(arr, pivot_index + 1, end, size);
	}
}

/**
 * partition - partitions the array
 * @arr: array to be sorted
 * @start: start index of the array
 * @end: end index of the array
 * @size: size of arr
 * Return: void
*/
int partition(int *arr, int start, int end, size_t size)
{
	int pivot_value = arr[end], j = start, i = start - 1, temp;

	for (; j <= end; j++)
	{
		if (arr[j] <= pivot_value)
		{
			i++;
			if (i == j)
				continue;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			if (i != j)
				print_array(arr, size);
		}
	}
	return (i);
}

