/* 
 * File:   bubble_sort.h
 * Author: brian
 *
 * Created on July 15, 2015, 11:45 PM
 */

#ifndef BUBBLE_SORT_H
#define	BUBBLE_SORT_H

#include <iostream>
#include <sstream>

#ifndef DEBUG
#define DEBUG false
#endif

class BubbleSort{
    
public:
    // PUBLIC FUNCTIONS
    int *ExecuteBubbleSort(int array[], int arraySize);
    
private:
    // PRIVATE FUNCTIONS
    void displayArray(int array[], int arraySize);
    
    
    // PRIVATE VARIABLES
    int tempValue;
    bool isSwapped;

#endif	/* BUBBLE_SORT_H */

};