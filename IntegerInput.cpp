/*
 * IntegerInput.cpp
 *
 *  Created on: Oct 19, 2023
 *      Author: casval
 */
#include <iostream>

int main()
{
	//initialize pointers and variables to 0/NULL
    int a = 0, b = 0, c = 0;
    int *mem1 = NULL, *mem2 = NULL, *mem3 = NULL;

    //ask for user input and save it in the console
    std::cout << "Enter 3 integer values: " << std::endl;
    std::cin >> a >> b >> c;

    //input handling for non-integers
    if(!std::cin){
    	std::cout << "Invalid input, please only enter numbers. Program has terminated" << std::endl;
    }

    //allocate 1 memory buffer to the pointers with new operator
    mem1 = new int[1];
    mem2 = new int[1];
    mem3 = new int[1];

    //assign value to the pointers
    mem1[0] = a;
    mem2[0] = b;
    mem3[0] = c;

    // print the values of the variables
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "Memory buffer 1: " << mem1[0] << std::endl;
    std::cout << "Memory buffer 2: " << mem2[0] << std::endl;
    std::cout << "Memory buffer 3: " << mem3[0] << std::endl;

    //delete the allocated memory with delete operator
    delete mem1;
    delete mem2;
    delete mem3;

}



