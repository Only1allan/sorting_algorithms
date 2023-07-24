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
 * bubble_sort - a function that sorts an array using bubble sort
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: void function
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int j;
	bool swapped;

	for (i = 0; i < (int)size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < (int)size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array + j, array + j + 1);
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}

}
