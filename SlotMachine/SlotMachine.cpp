/* 
 * File:   SlotMachine.cpp
 * Author: brian
 * 
 * Created on August 16, 2016, 8:18 PM
 */

#include "SlotMachine.h"
#include <time.h>
#include <math.h>
#include <iostream>
#include <sstream>
#include <string>
        
// CONSTRUCTORS
SlotMachine::SlotMachine() {
    srand(time(NULL));
}

SlotMachine::SlotMachine(const SlotMachine& orig) {
}

SlotMachine::~SlotMachine() {
}

// -------------------- PUBLIC FUCNTIONS --------------------
int SlotMachine::playRound(){
    string roundValues = generateWheelValues();
    // Create output string
    convertToFruit(roundValues);
    determineWinnings(roundValues);
    
    return roundWinnings;
}

// User Interface
void SlotMachine::getInstructions(){
    cout << "Select from the options below" << endl;
    cout << "1: Play Game" << endl;
    cout << "2: Check Available Balance" << endl;
    cout << "3: Add Money" << endl;
    cout << "4: See Instructions" << endl;
    cout << "5: Exit Game" << endl;
}

// Private Variable Function
void SlotMachine::setRoundWinnings(int winnings){
    roundWinnings = winnings;
}
int SlotMachine::getRoundWinnings(){
    return roundWinnings;
}

void SlotMachine::setResultString(string result){
    roundResult = result;
}
string SlotMachine::getResultString(){
    return roundResult;
}


// -------------------- PRIVATE FUCNTIONS --------------------
string SlotMachine::generateWheelValues(){
    // Generate 3 random values between 0 and 5
    int resultOne = rand() % 6;
    int resultTwo = rand() % 6;
    int resultThree = rand() % 6;

    // Create string appending three results and return
    ostringstream oss;
    oss << resultOne << resultTwo << resultThree;    
    return oss.str();
}

string SlotMachine::convertToFruit(string value){
    // 0 = CHERRY
    // 1 = LEMON
    // 2 = ORANGE
    // 3 = PLUM
    // 4 = BELL
    // 5 = BAR
    
    string fruitOutput;
    
    for (int i=0; i<value.length(); i++){
        switch(value[i]) {
            case '0' : 
                fruitOutput.append("CHERRY | "); 
                break;
            case '1' : 
                fruitOutput.append("LEMON | "); 
                break;
            case '2' : 
                fruitOutput.append("ORANGE | "); 
                break;
            case '3' : 
                fruitOutput.append("PLUM | "); 
                break;
            case '4' : 
                fruitOutput.append("BELL | "); 
                break;
            case '5' : 
                fruitOutput.append("BAR | "); 
                break;
        }
    }
    
    cout << fruitOutput << endl;
    
    // Convert the randomly generated value to corresponding fruit
    return fruitOutput;
}

void SlotMachine::determineWinnings(string roundValue){
    // Determine round winnings
    int cashMoney = 0;
        
    if (roundValue.find('1') != string::npos){
        // no money if result contains a lemon. No one wants a lemon
    } else if (roundValue == "000") {
        cashMoney = 7;
    } else if (roundValue[0] == '0' && roundValue[1] == '0'){
        cashMoney = 5;
    } else if (roundValue[0] == '0'){
        cashMoney = 2;
    } else if (roundValue == "222" || roundValue == "225"){
        cashMoney = 10;
    } else if (roundValue == "333" || roundValue == "335"){
        cashMoney = 14;
    } else if (roundValue == "444" || roundValue == "445"){
        cashMoney = 20;
    } else if (roundValue == "555"){
        cout << "JACKPOT!!" << endl;
        cashMoney = 250;
    }
    
    if (cashMoney == 0){
        cout << "You lose" << endl;
    } else {
        cout << "You won " << cashMoney << "!" << endl;
    }
    
    roundWinnings = cashMoney;
}