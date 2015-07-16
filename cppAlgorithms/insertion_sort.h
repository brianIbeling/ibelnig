/* 
 * File:   insertion_sort.h
 * Author: brian
 *
 * Created on July 9, 2015, 9:28 PM
 */

#ifndef INSERTION_SORT_H
#define	INSERTION_SORT_H

#include <iostream>

class InsertionSort {

public:
    
    // MEMBER FUNCTION
    int * ExecuteInsertionSort(int array[], int arraySize, bool withArray);
    
    // MEMBER VARIABLES
    int arrayPosition;
    int swapPosition;
    int tempValue;
};


#endif	/* INSERTION_SORT_H */

