/* 
 * File:   selection_sort.h
 * Author: brian
 *
 * Created on July 6, 2015, 6:59 PM
 */

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <iostream>

class SelectionSort {

public:
    // MEMBER FUNCTIONS
    int * ExecuteSelectionSort(int* inputArray, int inputArraySize);

    // MEMBER VARIABLES
    int currentValue;
    int lowestValue;
    int *lowestValueIndex;
};

#endif	/* SELECTION_SORT_H */