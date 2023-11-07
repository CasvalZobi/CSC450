/*
 * UserInput.cpp
 *
 *  Created on: Nov 7, 2023
 *      Author: casval
 */
#include <iostream>
#include <fstream>

int main() {
    std::string input;
    std::ofstream outFile;
    outFile.open("CSC450_CT5_mod5.txt", std::ios::app);
    if (outFile.is_open()) {
        std::cout << "Enter a string to be stored in the file: ";
        getline(std::cin, input);
        outFile << input << std::endl;
        outFile.close();
    } else {
        std::cout << "Error opening file" << std::endl;
    }

    std::ifstream inFile;
    std::ofstream outFile2;
    inFile.open("CSC450_CT5_mod5.txt");
    outFile2.open("CSC450_mod5-2.txt");
    if (inFile.is_open() && outFile2.is_open()) {
        std::string line;
        while (getline(inFile, line)) {
            outFile2 << line << std::endl;
        }
        inFile.close();
        outFile2.close();
    } else {
        std::cout << "Error opening file" << std::endl;
    }

    std::string reverse;
    std::ifstream inFile2;
    std::ofstream outFile3;
    inFile2.open("CSC450_mod5-2.txt");
    outFile3.open("CSC450_mod5-reverse.txt");
    if (inFile2.is_open() && outFile3.is_open()) {
        std::string line;
        while (getline(inFile2, line)) {
            reverse = std::string(line.rbegin(), line.rend());
            outFile3 << reverse << std::endl;
        }
        inFile2.close();
        outFile3.close();
    } else {
        std::cout << "Error opening file" << std::endl;
    }

    return 0;
}


