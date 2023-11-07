/*
 * StringInput.cpp
 *
 *  Created on: Oct 17, 2023
 *      Author: casval
 */
#include <iostream>
#include <cstring>


int main() {
    // Use a for loop to take input from the user three times
    for (int i = 0; i < 3; i++) {

    	//initialize the two sentences of 50 characters
    	char str1[50];
    	char str2[50];

    	//ask for user input and save them to the console
    	std::cout << "Please enter two sentences of no more then 50 characters:" << std::endl;
    	std::cin.getline(str1, 50);
    	std::cin.getline(str2, 50);

    	//function to concatenate both user inputs
    	strcat(str1, str2);

    	//output of the concatenated sentences
    	std::cout <<  "Concatenating these two sentences:" << str1 << std::endl;

    }
    return 0;
}



