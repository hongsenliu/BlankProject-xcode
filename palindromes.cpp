//
//  palindromes.cpp
//  Blank Project
//
//  Created by Hongsen Liu on 4/23/13.
//
//

#include "palindromes.h"

bool isPalindromes(std::string s)
{
    if (s.length()) {
        if (s[0] == s[s.length()-1]) {
            return isPalindromes(s.substr(1,s.length()-2));
        }
        else{
            return false;
        }
    }
    else{
        return true;
    }
}
