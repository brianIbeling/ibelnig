#include "insertion_sort.h"

using namespace std;

int * InsertionSort::ExecuteInsertionSort(int array[], int arraySize, bool withArray){
    // Perform insertion sort with array
    if(withArray){
        // Iterate through array and find its sorted position from the previous values
        // Start at position 1
        for(int i=1; i<arraySize; i++) {
            tempValue = array[i];
            arrayPosition = swapPosition = i;
            
            // Move through array backwards, swapping values until correct position is found
//            while()
            
            
            
        }
        
    } else {
    // Perform Insertion sort with Vector
        
        // Convert array to vector
        
        
        
    }
    
    
    return array;
}

