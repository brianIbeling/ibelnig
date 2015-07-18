/* 
 * File:   insertion_sort.h
 * Author: brian
 *
 * Created on July 9, 2015, 9:28 PM
 */

#ifndef INSERTION_SORT_H
#define	INSERTION_SORT_H

#include <iostream>
#include <sstream>
#include <vector>

#define DEBUG false

class InsertionSort {

public:
    
    // MEMBER FUNCTION
    int * ExecuteInsertionSort(int array[], int arraySize, bool withArray);
    void displayArray(int array[], int arraySize);

private:
    // PRIVATE MEMBER VARIABLES
    int unsortedValuePosition;
    int swapPosition;
    int valueToSort;
    int insertPosition;
    
    std::vector<int> mVector;
};

#endif	/* INSERTION_SORT_H */

