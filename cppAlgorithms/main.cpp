/* 
 * File:   main.cpp
 * Author: brian
 *
 * Created on July 4, 2015, 6:00 PM
 */

#include <cstdlib>
#include <iostream>
#include "selection_sort.h"
#include "insertion_sort.h"

int smallArray [5] = {4, 3, 5, 1, 2};

using namespace std;

// Function Prototypes
void displayArray(int array[], int arraySize);

/*
 * 
 */
int main(int argc, char** argv) {
    SelectionSort mSelectionSort;
    InsertionSort mInsertionSort;
    
    int arraySize = sizeof(smallArray) / sizeof(smallArray[0]);

    int *sortedArray = mSelectionSort.ExecuteSelectionSort(smallArray, arraySize);
    displayArray(sortedArray, arraySize);

    sortedArray = mInsertionSort.ExecuteInsertionSort(smallArray, arraySize, true);
    
    return 1;
}


void displayArray(int array[], int arraySize){
    for(int i=0; i<arraySize; i++){
        cout << i << " : " << array[i] << endl;
    }
}
 