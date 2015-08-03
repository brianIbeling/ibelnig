/* 
 * File:   StringSplit.cpp
 * Author: brian
 * 
 * Created on July 31, 2015, 7:05 PM
 */

#include <vector>

#include "StringSplit.h"

using namespace std;

StringSplit::StringSplit() {
}

StringSplit::StringSplit(const StringSplit& orig) {
}

StringSplit::~StringSplit() {
}

vector<string> StringSplit::split(const string& str, char delim, vector<string> &elems){
    stringstream ss(str);
    string item;
    while(getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

vector<string> StringSplit::split(const string& str, char delim){
    vector<string> elems;
    split(str, delim, elems);
    return elems;
}

