#include <stdio.h>
#include <stdlib.h>
#include "commonIO.h"
#define RANGE 100

int generateRandomInput(int* arr, int size)
{
    unsigned int i = 0;

    // Generate random input
    for(i = 0; i < size; i++)
    {
        arr[i] = rand() % RANGE;
    }

    return 0;
}

void displayArray(int* arr, int size, int output)
{
    unsigned int i = 0;

    if(output == 1)
    {
        printf("Output: ");
    }
    else
    {
        printf("Input:  ");
    }
    for(i = 0; i< size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}