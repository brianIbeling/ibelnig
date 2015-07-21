
#include "quick_sort.h"

int *QuickSort::ExecuteQuickSort(int array[], int start, int end){
    // Define start and end values
    int i = start;
    int j = end;
    
    // Define the pivot from first entry in partition/array
    pivot = array[i];
    
    // Start at either end of array, sorting values based on comparison to pivot value
    // Only sort if size of partition is greater than 2. Otherwise, partition is sorted.
    if(j-i >= 1){
        
        while(i<j){
            // From left to right, compare values to pivot. If greater than pivot, swap.
            while(array[i] <= pivot && i < j && i <= end){
                i++; // Skipping over, does not meet swap criteria
            }
            while(array[j] > pivot && i <= j && j >= start){
                j--;
            }
            if(i < j){
                swapValues(array, i, j);
            }
        }
        // After partitions created, swap end of left partition with pivot value
        swapValues(array, start, j);
        
        // perform quickSort on partitions
        ExecuteQuickSort(array, start, j-1);
        ExecuteQuickSort(array, j+1, end);
    } else {
        // Do nothing
    }
    
    return array;
}

void QuickSort::swapValues(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}