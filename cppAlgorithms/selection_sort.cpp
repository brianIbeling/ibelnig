#include "selection_sort.h"

using namespace std;

int * SelectionSort::ExecuteSelectionSort(int inputArray[], int inputArraySize){
    // Iterate through array by index and find the lowest value for each index
    for(int i=0; i<inputArraySize; i++){
        // get current value, set lowest value to first index value
        currentValue = inputArray[i];
        lowestValue = inputArray[i];

        // iterate through array, finding lowest value
        for(int j=i; j<inputArraySize; j++){
            if(inputArray[j] <= lowestValue){
                lowestValueIndex = &inputArray[j];
                lowestValue = inputArray[j];
            } 
        }

        // Set current array index to the retrieved lowest value
        inputArray[i] = lowestValue;

        // Swap found index value with current index value
        // Ignore if last value in array
        if(i != inputArraySize)
            *lowestValueIndex = currentValue;
    }

    return inputArray;
}