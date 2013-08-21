//
//  rwFile.cpp
//  Blank Project
//
//  Created by Hongsen Liu on 4/24/13.
//
//

#include "rwFile.h"


std::string promptUserForFile(std::ifstream & infile, std::string prompt)
{
    while (true) {
        std::cout << prompt;
        std::string filename;
        getline(std::cin, filename);
        infile.open(filename.c_str());
        if (!infile.fail()) {
            return filename;
        }
        infile.clear();
        std::cout << "Unable to open that file. Try again.\n";
        if (prompt =="") {
            prompt = "Input file: ";
        }
    }
}