/* 
 * File:   AvgRandom.h
 * Author: brian
 *
 * Created on April 3, 2016, 11:38 AM
 */

#ifndef AVGRANDOM_H
#define	AVGRANDOM_H

#include <iostream>
#include <string>

#include <stdlib.h>

using namespace std;

class RandomGenerator {
public:
    enum coinValue {HEADS, TAILS};
    
    RandomGenerator();
    RandomGenerator(const RandomGenerator& orig);
    virtual ~RandomGenerator();
    
    double generateRandAvg(int min, int max);
    
    int getConsecutiveCoinFlip(enum coinValue, int numSuccess);
    
private:
    int coinFlip();
    string getCoinString(int coinValue);
    
};

#endif	/* AVGRANDOM_H */

