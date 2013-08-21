//
//  reverseString.cpp
//  Blank Project
//
//  Created by Hongsen Liu on 4/23/13.
//
//

#include "reverseString.h"

using namespace std;

string reverseString(string s)
{
    if (s.length()) {
        return reverseString(s.substr(1))+s[0];
    }
    else{
        return s;
    }
}
