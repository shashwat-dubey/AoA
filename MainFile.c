#include <stdio.h>
#include "cmnInterface.h"

#define INPUT_SIZE 100

#define DISPLAY 1

enum SortingAlgoType Algo = InsertionSort;

int main()
{
    int a[INPUT_SIZE] = {0};

    // Generate random input
    generateRandomInput(a, INPUT_SIZE);

#if DISPLAY
    displayArray(a, INPUT_SIZE, INPUT);
#endif
    
    switch(Algo)
    {
        case InsertionSort:
            insertionSortAlgo(a, INPUT_SIZE);
            break;
        
        case MergeSort:
            //MergeSortAlgo(a, INPUT_SIZE);
            break;

        default:
            printf("Invalid Algorithm Type Requested.\n");
            break;
    }

#if DISPLAY
    displayArray(a, INPUT_SIZE, OUTPUT);
#endif

    return 0;
}