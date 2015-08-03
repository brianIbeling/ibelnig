/* 
 * File:   StringSplit.h
 * Author: brian
 *
 * Created on July 31, 2015, 7:05 PM
 */

#ifndef STRINGSPLIT_H
#define	STRINGSPLIT_H

#include <vector>
#include <string>
#include <sstream>

using namespace std;

class StringSplit {
public:
    StringSplit();
    StringSplit(const StringSplit& orig);
    virtual ~StringSplit();
     
    vector<string> split(const string& str, char delim);
    vector<string> split(const string& str, char delim, vector<string> &elems);

private:
    
};

#endif	/* STRINGSPLIT_H */

