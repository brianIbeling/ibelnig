/* 
 * File:   LargestTelephoneSum.h
 * Author: brian
 *
 * Created on July 31, 2015, 6:41 PM
 */

#ifndef LARGESTTELEPHONESUM_H
#define	LARGESTTELEPHONESUM_H

#include <string>
#include <iostream>

#include "StringSplit.h"

using namespace std;

class LargestTelephoneSum {
public:
    LargestTelephoneSum();
    LargestTelephoneSum(const LargestTelephoneSum& orig);
    virtual ~LargestTelephoneSum();
    
    string DetermineLargest(string phoneNumbers);
private:

};

#endif	/* LARGESTTELEPHONESUM_H */

