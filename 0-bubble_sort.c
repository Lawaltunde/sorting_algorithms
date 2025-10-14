#include "sort.h"

/**
  * bubble_sort - function that sorts an array of
  * integers in ascending order using the Bubble sort algorithm
  * @array: array of int
  * @size: array size
  * Return: Nothing
  */
void bubble_sort(int *array, size_t size)
{
	int *arr = array, flag;
	size_t k = 0, j = 0, temp = 0;

	if (!arr)
		return;

	for (j = 0; j < (size - 1); j++)
	{
		flag = 0;
		for (k = 0; k < (size - 1 - j); k++)
		{
			if (arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
				flag = 1;
				print_array(arr, size);
			}
		}
		if (flag == 0)
			break;
	}
}
