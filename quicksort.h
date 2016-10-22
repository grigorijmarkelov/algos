#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <stdio.h>
#include <stdlib.h>

void swap(int *first_int,int *second_int);
int pivoting(int first_val,int second_val);
void quicksort(int arr[],int first,int last);
// Here we will break process into logical parts:
// choosing pivot
// swapping
// actually sorting
void swap(int *first_int,int *second_int)
{
    	int temp = *first_int;
    	*first_int = *second_int;
    	*second_int = temp;
}

int pivoting(int first_val,int second_val)
{
        return ((first_val + second_val)/2);
}

void quicksort(int arr[],int first,int last)
{
    	int pivot_point,pivot_value,i,j;
    	if(first < last)
	{
		pivot_point = pivoting(first,last);
		swap(&arr[first],&arr[pivot_point]);
    		pivot_value = arr[first];
    
    		i = first+1;
    		j = last;
    		while(i <= j)
    		{	       
	    		while((i <= last) && (arr[i] <= pivot_value))
		    		i++;
    	    		while((j >= first) && (arr[j] > pivot_value))
		    		j--;
	    		if(i < j)
		    		swap(&arr[i],&arr[j]);
    		}
    		swap(&arr[first],&arr[j]);

    		quicksort(arr,first,j-1);
    		quicksort(arr,j+1,last);
	}
}
#endif
