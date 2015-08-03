#include "merge_sort.h"
#include "bubble_sort.h"

int * MergeSort::ExecuteMergeSort(int array[], int arraySize){
    BubbleSort mBubbleSort;
    
    // Split array in half, 
    int pivot = (arraySize/2);
    
    int leftArray[pivot];
    int rightArray[arraySize-pivot];
    
    for(int i=0; i<pivot; i++){
        leftArray[i] = array[i];
    }
    for(int i=0; i<arraySize-pivot; i++){
        rightArray[i] = array[i+pivot];
    }
    
    // Sort two halves
    mBubbleSort.ExecuteBubbleSort(leftArray, pivot);
    mBubbleSort.ExecuteBubbleSort(rightArray, arraySize - pivot);
    
    for(int i=0; i<pivot; i++){
        cout << leftArray[i] << endl;
    }
    for(int i=0; i<arraySize - pivot; i++){
        cout << rightArray[i] << endl;
    }
    
    int j = 0, k = 0;
    // merge halves together
    for(int i=0; i<arraySize; i++){
        
        if(j < pivot && (k > arraySize-pivot || leftArray[j] <= rightArray[k])){
            array[i] = leftArray[j];
            j++;
        } else if(k < arraySize-pivot && (j > pivot || rightArray[k] < leftArray[j])){
            array[i] = rightArray[k];
            k++;
        }
        cout << array[i] << endl;
    }
    
    return array;
}
