#include "insertion_sort.h"

using namespace std;

int * InsertionSort::ExecuteInsertionSort(int array[], int arraySize, bool withArray){
    if(withArray){
        // Perform insertion sort with array
        
        // Iterate through array and find its sorted position within the previous values before array[i]
        // Start sorting at array index 1
        for(int i=1; i<arraySize; i++) {
            valueToSort = array[i];
            swapPosition = i-1;
            insertPosition = i;
            
            // Loop through previous array values from position i until sorted position is found
            while(array[swapPosition] > valueToSort && swapPosition >= 0){
                // If entered while loop, update insertPosition index
                insertPosition = swapPosition;
                // Need to shift each value by 1 while iterating back through array. Move to next value
                array[swapPosition+1] = array[swapPosition];
                swapPosition--;
            }
            
            // Sorted value position found
            if(insertPosition-1 != swapPosition)
                array[insertPosition] = valueToSort;
            
#if DEBUG
            displayArray(array, arraySize);
#endif
        }
        
    } else {
        // Perform Insertion sort with Vector
        
        // Convert array to vector
        for(int i=0; i<arraySize; i++){
            mVector.push_back(array[i]);
        }
        
        // Iterate through vector and sort values 
        for(int i=1; i<arraySize; i++) {
            int valueToInsert = mVector[i];
            insertPosition = i;
            
            while(mVector[insertPosition-1] > valueToInsert && insertPosition >= 0 ){
                if(insertPosition == 0)
                    break;
                
                // Entered while loop, continue while until insert position is found
                insertPosition -= 1;
                
            }
            
            // Check if element is not largest in currently sorted array
            if(insertPosition != i){
                // Remove element from current position and insert into new position
                mVector.erase(mVector.begin() + i);
                mVector.insert(mVector.begin() + insertPosition, 1, valueToInsert); 
            }
        }
        
        // Convert vector to array
        array = &mVector[0];
    }
    return array;
}

void InsertionSort::displayArray(int array[], int arraySize){
    stringstream contents;

    contents << "{";
    for(int i=0; i<arraySize; i++){
        contents << array[i];
        if(i != arraySize-1)
            contents << ", ";
    }
    contents << "}";
    
    cout << contents.str() << endl;
}