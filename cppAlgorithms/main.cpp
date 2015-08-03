/* 
 * File:   main.cpp
 * Author: brian
 *
 * Created on July 4, 2015, 6:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <sstream>
#include "selection_sort.h"
#include "insertion_sort.h"
#include "bubble_sort.h"
#include "quick_sort.h"
#include "merge_sort.h"


/*
 *  Test cases
 * 
 * Small unsorted array (no dups)
 * Small unsorted array (dups) 
 * small sorted (no dups)
 * small unsorted (dups)
 * 
 * large ^^
 * Negative numbers ^^
 */


//int mediumArray [5] = {4, 3, 5, 1, 2};
int mediumArray [13] = {4, -3, 5, -1, 24, 3, 5, 1, -21, 3, 5, 1, 2};
//int mediumArray [8] = {0,5,2,3,1,2,3,4};

using namespace std;

// Function Prototypes
void displayArray(int array[], int arraySize);

/*
 * 
 */
int main(int argc, char** argv) {
    SelectionSort mSelectionSort;
    InsertionSort mInsertionSort;
    BubbleSort mBubbleSort;
    QuickSort mQuickSort;
    MergeSort mMergeSort;
    
    
    int arraySize = sizeof(mediumArray) / sizeof(mediumArray[0]);

    displayArray(mediumArray, arraySize);
    
//    int *sortedArray = mSelectionSort.ExecuteSelectionSort(mediumArray, arraySize);
//    displayArray(sortedArray, arraySize);
    
//    int *insertionSortArray = mInsertionSort.ExecuteInsertionSort(mediumArray, arraySize, false);
//    displayArray(insertionSortArray, arraySize);
    
//    int *bubbleSortArray = mBubbleSort.ExecuteBubbleSort(mediumArray, arraySize);
//    displayArray(bubbleSortArray, arraySize);
    
//    int *quickSortArray = mQuickSort.ExecuteQuickSort(mediumArray, 0, arraySize-1);
//    displayArray(quickSortArray, arraySize);
    
    int *mergeSortArray = mMergeSort.ExecuteMergeSort(mediumArray, arraySize);
    displayArray(mergeSortArray, arraySize);
    
    return 0;
}


void displayArray(int array[], int arraySize){
    stringstream contents;
    
    contents << "{";
    for(int i=0; i<arraySize; i++){
        contents << array[i];
        if(i != arraySize-1)
            contents << ", ";
    }
    contents << "}";
    
    cout << contents.str() << endl;
}
 