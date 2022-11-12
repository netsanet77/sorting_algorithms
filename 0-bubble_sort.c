#include "sort.h"
/**
 * bubble_sort - sort an array of integers in ascending order using bubble sort
 * @array: the given array
 * @size: the size of array
 *
 * Return: nothing
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
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
}
