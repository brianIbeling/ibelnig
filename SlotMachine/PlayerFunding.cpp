/* 
 * File:   PlayerFunding.cpp
 * Author: brian
 * 
 * Created on August 16, 2016, 8:18 PM
 */

#include "PlayerFunding.h"
#include <assert.h>
#include <iostream>

// -------------------- CONSTRUCTORS --------------------
PlayerFunding::PlayerFunding() {
    setAvailableMoney(50);
}

PlayerFunding::PlayerFunding(const PlayerFunding& orig) {
}

PlayerFunding::~PlayerFunding() {
}

// -------------------- PUBLIC FUNCTIONS --------------------
int PlayerFunding::getAvailableMoney(){
    return availableMoney;
}

void PlayerFunding::setAvailableMoney(int cashMoney){
    if(CheckPosNum(cashMoney)) {
        availableMoney = cashMoney;
    }
}

void PlayerFunding::addMoney(int winnings){
    if(CheckPosNum(winnings)){
        availableMoney += winnings;
    }
}

void PlayerFunding::loseMoney(int loses){
    if(CheckPosNum(loses)){
        availableMoney -= loses;
    }
}

bool PlayerFunding::checkPlayFundingAvailable(){
    if (availableMoney > 0)
        return true;
    else
        return false;
}

// -------------------- PRIVATE FUNCTIONS --------------------
bool PlayerFunding::CheckPosNum(int num){
    if (num > -1 ){
        return true;
    } else {
        std::cout << "Please enter a positive integer" << std::endl;
        return false;
    }
}