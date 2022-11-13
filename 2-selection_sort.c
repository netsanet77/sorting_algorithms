#include "sort.h"
/**
 * selection_sort - sorts an array of  integers in ascending order
 * using selection sort algorithm
 * @array: the given array
 * @size: the size of the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			for (k  = 0; k < size; k++)
			{
				if (k != size - 1)
					printf("%d, ", array[k]);
				else
					printf("%d\n", array[k]);
			}
		}
	}
}
