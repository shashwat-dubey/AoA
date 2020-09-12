#define INPUT  0
#define OUTPUT 1

enum SortingAlgoType{
    InsertionSort = 0,
    MergeSort
};

int  generateRandomInput(int* arr, int size);
void displayArray(int* arr, int size, int output);

/* Sorting Algorithms interfaces */
void insertionSortAlgo(int *arr, int size);

void mergeSortAlgo(int *arr, int size);