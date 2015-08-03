/* 
 * File:   main.cpp
 * Author: brian
 *
 * Created on July 31, 2015, 6:33 PM
 */

#include <cstdlib>

#include "LargestTelephoneSum.h"
#include "StringSplit.h"

using namespace std;

/*
 * 
 */
int main() {
    LargestTelephoneSum lts;
    
    string phoneNumbers = "123-456-7777,963-481-7945,111-222-3333";
    string largestNumber = lts.DetermineLargest(phoneNumbers);
    cout << "Largest summed phone number is: " << largestNumber << endl;
    
    return 0;
}

