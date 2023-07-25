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
 * selection_sort - a function that sorting array using selection sort
 * @array: pointer to the array to be sorted
 * @size: size of the array to be sorted
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (index != i)
		{
			swap(&array[index], &array[i]);
			print_array(array, size);
		}
	}
}
