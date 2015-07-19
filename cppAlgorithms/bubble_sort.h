/* 
 * File:   bubble_sort.h
 * Author: brian
 *
 * Created on July 15, 2015, 11:45 PM
 */

#ifndef BUBBLE_SORT_H
#define	BUBBLE_SORT_H

#include <iostream>

class BubbleSort{
    
public:
    // PUBLIC FUNCTIONS
    int *ExecuteBubbleSort(int array[], int arraySize);
    
private:
    // PRIVATE FUNCTIONS
    
    // PRIVATE VARIABLES
    int tempValue;
    int numSwaps;

#endif	/* BUBBLE_SORT_H */

};