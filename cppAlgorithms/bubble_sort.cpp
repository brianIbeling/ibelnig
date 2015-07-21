#include "bubble_sort.h"

using namespace std;
    
int *BubbleSort::ExecuteBubbleSort(int array[], int arraySize){
    // Iterate through list, compare two adjacent pairs, swap if out of order
    
    // iterate through array, grabbing adjacent pairs and checking if needing to be swapped
    // This is result in the largest value being pushed to the back of the array
    // Repeat until array is sorted
        
    do{
        #if DEBUG
            displayArray(array, arraySize);
        #endif 
        isSwapped = false;
        
        // Iterate through array, grabbing adjacent pairs and swapping is [i] > [i+1]
        for(int i=1; i<arraySize; i++){
            if(array[i-1] > array[i]){
                // swap values
                tempValue = array[i];
                array[i] = array[i-1];
                array[i-1] = tempValue;
                isSwapped = true;
            }
        }
    } while (isSwapped);
    
    return array;
}    

void BubbleSort::displayArray(int array[], int arraySize){
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