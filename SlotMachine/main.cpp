/* 
 * File:   main.cpp
 * Author: brian
 *
 * Created on August 16, 2016, 8:03 PM
 */

#include <cstdlib>
#include "PlayerFunding.h"
#include "SlotMachine.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    // Create player interface via command line. Take input (numbers) to do the following
    //  1 - Play game
    //  2 - Check funding
    //  3 - See Instructions
    
    int userSelection = 0;
    int addedFunding = 0;
    PlayerFunding userFunding;
    SlotMachine slotMachine;
    
    bool playingGame = true;

    cout << "**Ibeling's Casino and Slot Machine!**" << endl;
    slotMachine.getInstructions();
    
    while(playingGame){
        cout << "What do you wish to do?" << endl;
        
        if(cin >> userSelection) {
            switch(userSelection) {
                case 1:
                    userFunding.loseMoney(1);   // Cost per round
                    addedFunding = slotMachine.playRound();    // Calculate values
                    
                    if (addedFunding){
                        userFunding.addMoney(addedFunding);   // Add winnings
                    }
                    
                    cout << "Current Balance: " << userFunding.getAvailableMoney() << endl;
                    break;
                case 2:
                    cout << "Available Balance: " << userFunding.getAvailableMoney() << endl;
                    break;
                case 3:
                    cout << "How much money would you like to add?" << endl;
                    if(cin >> addedFunding) {
                        userFunding.addMoney(addedFunding);
                    } else {
                        cout << "Please enter a valid positive integer" << endl;
                        cin.clear();
                        cin.ignore();
                    }
                    break;
                case 4: 
                    slotMachine.getInstructions();
                    break;
                case 5:
                    playingGame = false;
                    break;

                default:
                    cout << "Please enter a valid entry between [1 - 5] " << endl;
            }
        } else {
            cout << "Please enter a valid entry between [1 - 5] " << endl;
            cin.clear();
            cin.ignore();
        }
    }    
    return 0;
}