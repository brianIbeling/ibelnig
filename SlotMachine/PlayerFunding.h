/* 
 * File:   PlayerFunding.h
 * Author: brian
 *
 * Created on August 16, 2016, 8:18 PM
 */

#ifndef PLAYERFUNDING_H
#define	PLAYERFUNDING_H

class PlayerFunding {
public:
    int getAvailableMoney();
    void setAvailableMoney(int cashMoney);
    void addMoney(int winnings);
    void loseMoney(int loses);
    bool checkPlayFundingAvailable();
    
    PlayerFunding();
    PlayerFunding(const PlayerFunding& orig);
    virtual ~PlayerFunding();
private:
    int availableMoney;
    
    bool CheckPosNum(int num);
};

#endif	/* PLAYERFUNDING_H */

