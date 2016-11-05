/* 
 * File:   AvgRandom.cpp
 * Author: brian
 * 
 * Created on April 3, 2016, 11:38 AM
 */

#include "RandomGenerator.h"

// PUBLIC METHODS //
RandomGenerator::RandomGenerator() {
}

RandomGenerator::RandomGenerator(const RandomGenerator& orig) {
}

RandomGenerator::~RandomGenerator() {
}

double RandomGenerator::generateRandAvg(int min, int max){
    // Produces a random value less than 1 (>0)
    double output = double(rand() / (double(RAND_MAX)+1) );

    // Scales value based on range
    // Add +1 to avoid multiply by 0
    return min + output * (max - min);
//    return output;
}

int RandomGenerator::getConsecutiveCoinFlip(coinValue coinSelection, int numSuccessNeeded){
    string selectedSide = getCoinString(coinSelection);
    int numConsecutiveSuccess = 0;
    int numTrials = 0;
    int lastCoinValue;
    
    cout << "Need " << numSuccessNeeded << " successful coin flips of value " << selectedSide << " to win!" << endl;
    
    while (1){
        numTrials++;
        int currentCoinValue = coinFlip();
        cout << getCoinString(currentCoinValue) << endl;
        
        if((lastCoinValue == currentCoinValue) && (currentCoinValue == coinSelection)){
            numConsecutiveSuccess++;
        } else {
            numConsecutiveSuccess = 0;
        }
        
        if (numConsecutiveSuccess == numSuccessNeeded-1){
            cout << numSuccessNeeded << " successes found!" << endl;
            cout << numTrials << " trials total!" << endl;
            return 0;
        }
        
        lastCoinValue = currentCoinValue;
    }
}


// PRIVATE METHODS //
int RandomGenerator::coinFlip(){
    double randValue = rand();
    
    if(randValue < RAND_MAX/2){
        return HEADS;
    } else {
        return TAILS;
    }
}

string RandomGenerator::getCoinString(int coinValue){
    if(coinValue == 0){
        return "Heads";
    } else {
        return "Tails";
    }
}