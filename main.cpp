//
//  main.cpp
//  Blank Project
//
//  Created by Hongsen Liu on 4/22/13.
//
//

#include "simpio.h"
#include "main.h"



using namespace std;
// factorial
int factorial(int n)
{
    if (n == 0) {
        return 1;
    }
    else
    {
        return n * factorial(n-1);
    }
}

int sumOfDigits(int n)
{
    if (n < 10) {
        return n;
    } else {
        return (n % 10) + sumOfDigits(n/10);
    }
}

int digitalRoot(int n)
{
    if (n < 10) {
        return n;
    } else {
        return digitalRoot(sumOfDigits(n));
    }
}



int main()
{
//    int n = 5;
//    cout << "5! = " << factorial(n) << endl;
//    int x = 129;
//    cout << x << " digital root = " << digitalRoot(x) << endl;
    
//    string str = getLine("Enter a string: ");
    
//    str=reverseString(str);
//    cout << isPalindromes(str) << endl;
    ifstream infile;
    promptUserForFile(infile, "Input file: ");

    string line;
    while (getline(infile, line)) {
        if (isPalindromes(line)) {
            cout << line << " is Palindromes.\n";
        }
    }
    infile.close();
    return 0;
}

