/*!
* \file		  Demo.cpp
* \brief     This is a test source file for a demo.
* \details   This file implements MyClass and contains the main entry point.
* \author    Marco v spengen
* \version   0.1
* \date      11-9-2025
*/
#include "Demo.hpp"
#include <iostream>

// Implementation of the sum method for MyClass
int MyClass::sum(int a, int b)
{
    return a + b;
}

int main()
{
    // Create an instance of MyClass
    MyClass myObject;

    // Call the public sum method on the object
    int result = myObject.sum(2, 3);

    // Print the result to the console
    std::cout << "The result is: " << result << std::endl;
}