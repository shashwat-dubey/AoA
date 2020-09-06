#include <stdio.h>
#include "commonIO.h"

#define INPUT_SIZE 100

#define DISPLAY 1

int main()
{
    int a[INPUT_SIZE] = {0};
    int key = 0;
    int i = 0, j = 0;

    // Generate random input
    generateRandomInput(a, INPUT_SIZE);

#if DISPLAY
    displayArray(a, INPUT_SIZE, INPUT);
#endif
    
    // Insertion Sort
    for(j = 2; j < INPUT_SIZE; j++)
    {
        key = a[j];
        i   = j - 1;

        // All elements before key should be sorted
        while((i > -1) && (a[i] > key))
        {
            a[i+1] = a[i];  // Shift items right, it is ok to overwrite a[i+1], as we ave stored a temp copy in key
            i      = i - 1; // Check previous items, until i points to fisrt element
        }
        a[i+1] = key;
    }

#if DISPLAY
    displayArray(a, INPUT_SIZE, OUTPUT);
#endif

    return 0;
}