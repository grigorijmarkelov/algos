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


#endif
