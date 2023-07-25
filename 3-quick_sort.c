#include "sort.h"
/**
 * swap - a function that swaps values
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: void
 */
void swap(int *a, int *b)
{
	int x = *a;
	 *a = *b;
	 *b = x;
}
/**
 * lomuto_part - order according to lomuto partitioning
 * @array: array of integers to sort
 * @size: array size
 * @left: starting index to partition
 * @right: ending index to partition
 * Return: int to the top value
 */
int lomuto_part(int *array, size_t size, int left, int right)
{
	int *center, top, bottom;

	center = array + right;
	for (top = bottom = left; bottom < right; bottom++)
	{
		if (array[bottom] < *center)
		{
			if (top < bottom)
			{
				swap(array + bottom, array + top);
				print_array(array, size);
			}
			top++;
		}
	}
	if (array[top] > *center)
	{
		swap(array + top, center);
		print_array(array, size);
	}
	return (top);
}
/**
 * recursion_sort - quick sort algorithm using recursion
 * @array: array of integers to sort
 * @size: array size
 * @left: starting index to partition
 * @right: ending index to partition
 */
void recursion_sort(int *array, size_t size, int left, int right)
{
	int partition;

	if (right - left > 0)
	{
		partition = lomuto_part(array, size, left, right);
		recursion_sort(array, size, left, partition - 1);
		recursion_sort(array, size, partition + 1, right);
	}
}
/**
 * quick_sort - a function sorting array using quick sort
 * @array: pointer to the array
 * @size: size of the array to be sorted
 * Return: function is a void hence no return
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	recursion_sort(array, size, 0, size - 1);
}
