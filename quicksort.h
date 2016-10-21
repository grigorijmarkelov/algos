#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>

# Here we will break process into logical parts:
# choosing pivot
# swapping
# actually sorting

void swap(int *first_int, int *second_int)
{
    	int temp = *first_int;
    	*first_int = *second_int;
    	*second_int = temp;
}

int pivoting(int first_int, int second_int)
{
        return (first_int + second_int)/2;
}

void quicksort(int arr[], int first, int last)
{
    	int pivot_point, pivot_value, i, j;
    	pivot_point = pivoting(first, last);
    	pivot_value = arr[pivot_point];
    
    i = first;
    j = last;
    while(i <= j)
    {       
	    while((i <= n) && (arr[i] <= pivot_value))
		    i++;
    	    while((j >= m) && (arr[j] > pivot_value))
		    j--;
	    if(i < y)
		    swap(&arr[i], &arr[j];
    }
    swap(&arr[i], &arr[j]);

    quicksort(arr, m, pivot_point-1);
    quicksort(arr,pivot_point+1, n);
}
#endif
