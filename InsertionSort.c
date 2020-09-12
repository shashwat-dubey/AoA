#include "cmnInterface.h"

void insertionSortAlgo(int *arr, int size)
{
    int i = 0;
    int j = 0;
    int key = 0;

    // Insertion Sort
    for(j = 2; j < size; j++)
    {
        key = arr[j];
        i   = j - 1;

        // All elements before key should be sorted
        while((i > -1) && (arr[i] > key))
        {
            arr[i+1] = arr[i];  // Shift items right, it is ok to overwrite a[i+1], as we ave stored a temp copy in key
            i      = i - 1; // Check previous items, until i points to fisrt element
        }
        arr[i+1] = key;
    }

    return;
}