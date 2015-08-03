/* 
 * File:   LargestTelephoneSum.cpp
 * Author: brian
 * 
 * Created on July 31, 2015, 6:41 PM
 */

#include "LargestTelephoneSum.h"

using namespace std;

LargestTelephoneSum::LargestTelephoneSum() {
}
LargestTelephoneSum::LargestTelephoneSum(const LargestTelephoneSum& orig) {
}
LargestTelephoneSum::~LargestTelephoneSum() {
}

string LargestTelephoneSum::DetermineLargest(string phoneNumbers){
    string largestNumber;
    
    // Split the string into an array
    StringSplit stringSplit;
    
    vector<string> numbersArray = stringSplit.split(phoneNumbers, ',');
    
    // Determine length of the array
    int arraySize = sizeof(numbersArray) / sizeof(numbersArray[0]);
    cout << "ArraySize: " << arraySize << endl;
    
    // Use this index to return the largest phone number
    int largestNumberIndex = 0;
    int largestTotal = 0;
    
    for(int i=0; i<arraySize; i++){
        string number = numbersArray[i];
        int phoneTotal = 0;
        
        // Convert each string digit to a number
        for(int j=0; number[j] != '\0'; j++){
            // Skip over dashes
            if (j==3 || j==7){
                continue;
            }
            // Convert each character to an int
            stringstream ss;
            ss << number[j];
            int result;
            ss >> result;
            
            // Accumulate running total
            phoneTotal += result;
        }
        
        cout << numbersArray[i] << endl;
        cout << phoneTotal << endl;
        
        // Determine if calculated total is the largest phone number
        if(phoneTotal > largestTotal){
            largestTotal = phoneTotal;
            largestNumberIndex = i;
        }
    }
    
    // Determine sum for each one and set the array index for the largest value
    
    return numbersArray[largestNumberIndex];
}