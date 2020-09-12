#include<string.h>
#include<stdlib.h>
#include "cmnInterface.h"

void merge(int *arr1, int *arr2, int size, int *copyArr)
{
    int size1  = size/2;
    int size2  = (size/2) + (size % 2);
    int index1 = 0;
    int index2 = 0;
    int index3 = 0;

    while((index1 < size1) && (index2 < size2))
    {
        if(arr1[index1] < arr2[index2])
        {
            copyArr[index3++] = arr1[index1++];
        }
        else
        {
            copyArr[index3++] = arr2[index2++];
        }
    }
    while(index1 < size1)
    {
        copyArr[index3++] = arr1[index1++];
    }
    while(index2 < size2)
    {
        copyArr[index3++] = arr2[index2++];
    }

    return;
}

void mergeSortAlgo(int *arr, int size)
{
    int *copyArr = 0;

    if(size == 1)
    {
        return;
    }
    else
    {
        copyArr = (int*) calloc(sizeof(int), size);
        mergeSortAlgo(arr, size/2);
        mergeSortAlgo(arr+size/2, (size/2) + (size%2));
        merge(arr, arr+size/2, size, copyArr);
        memcpy(arr, copyArr, size*sizeof(int));
        free(copyArr);
    }
}