/* 
 * File:   quick_sort.h
 * Author: brian
 *
 * Created on July 18, 2015, 10:06 PM
 */

#ifndef QUICK_SORT_H
#define	QUICK_SORT_H


class QuickSort{
public:
    int *ExecuteQuickSort(int array[], int start, int end);
    
private:
    void swapValues(int array[], int i, int j);
    
    int pivot;
};

#endif	/* QUICK_SORT_H */

