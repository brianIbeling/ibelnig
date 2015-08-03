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

#ifndef DEBUG
#define DEBUG true
#endif

class InsertionSort {

public:
    // MEMBER FUNCTION
    int * ExecuteInsertionSort(int array[], int arraySize, bool withArray);
    
private:
    // PRIVATE FUNCTION
    void displayArray(int array[], int arraySize);
    
    // PRIVATE MEMBER VARIABLES
    int unsortedValuePosition;
    int swapPosition;
    int valueToSort;
    int insertPosition;
    
    std::vector<int> mVector;
};

#endif	/* INSERTION_SORT_H */

