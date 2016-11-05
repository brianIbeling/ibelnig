/* 
 * File:   SlotMachine.h
 * Author: brian
 *
 * Created on August 16, 2016, 8:18 PM
 */

#ifndef SLOTMACHINE_H
#define	SLOTMACHINE_H

#include <iostream>
#include <string>

#include <stdlib.h>

using namespace std;

class SlotMachine {
public:
    // Game
    int playRound();
    
    // User Interface
    void getInstructions();
    
    // Private Variable Getters/Setters
    void setRoundWinnings(int winnings);
    int getRoundWinnings();
    void setResultString(string result);
    string getResultString();
    
    SlotMachine();
    SlotMachine(const SlotMachine& orig);
    virtual ~SlotMachine();
private:
    string roundResult;
    int roundWinnings;
    
    string generateWheelValues(); // Generate 
    string convertToFruit(string value); // Map randomly generated value to slot machine result
    void determineWinnings(string roundResult); // determine if combination results in winnings
};

#endif	/* SLOTMACHINE_H */

