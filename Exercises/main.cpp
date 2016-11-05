/* 
 * File:   main.cpp
 * Author: brian
 *
 * Created on July 31, 2015, 6:33 PM
 */

#include <cstdlib>

#include "LargestTelephoneSum.h"
#include "StringSplit.h"
#include "RandomGenerator.h"
#include <stdlib.h>
#include <time.h>


using namespace std;

int main() {
    // Seed random number generator
    srand(time(NULL));
    
    RandomGenerator mRandomGenerator;
    mRandomGenerator.getConsecutiveCoinFlip(RandomGenerator::HEADS, 5);
}


/*
 * 
 */
//int main() {
//    LargestTelephoneSum lts;
//    
//    string phoneNumbers = "123-456-7777,963-481-7945,111-222-3333";
//    string largestNumber = lts.DetermineLargest(phoneNumbers);
//    cout << "Largest summed phone number is: " << largestNumber << endl;
//    
//    return 0;
//}


/* 
 Average of randomly generated numbers
 */
//int main() {
//    AvgRandom mAvgRandom;
//    double n=10000;
//    double randValue=0;
//    
//    // for n trials, calculate a running average between the min and max values
//    for (int i=0; i<n; i++){
//        randValue += mAvgRandom.generateRandAvg(1,3);
//        cout << "Index[" << i << "] : " << randValue << endl;
//    }
//    
//    cout << "Final Avg Value: " << double(randValue / 10000) << endl;
//}
