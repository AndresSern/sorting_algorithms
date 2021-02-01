#include "sort.h"

void swap_Array(int *array, size_t j, size_t k);
void selection_sort(int *array, size_t size)
{
	size_t j, k, minInd;
	int temp;
	for(j = 0; j < size; j++)
	{
		minInd = j;
		for(k = j + 1; k < size; k++)
		{
			if(array[minInd] > array[k])
			{
				minInd = k;
			}
		}	
		if (array[j] > array[minInd] && j < size -1)
		{
			swap_Array(array, j, minInd);
			printf("(%d)", array[j]);
			print_array(array, size);
		}
	}
	(void)temp;
}


void swap_Array(int *array, size_t j, size_t k)
{
	int temp;
	temp = array[j];
	array[j] = array[k];
	array[k] = temp;
}


