/* 
 * File:   merge_sort.h
 * Author: brian
 *
 * Created on July 18, 2015, 10:06 PM
 */

#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <sstream>


#ifndef MERGE_SORT_H
#define	MERGE_SORT_H

using namespace std;

class MergeSort{
    
public:
    int *ExecuteMergeSort(int array[], int arraySize);
    
private:
    int testArray[30];
};

#endif	/* MERGE_SORT_H */

