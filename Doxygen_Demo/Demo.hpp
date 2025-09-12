#pragma once
/*!
* \file		  Demo.hpp
* \brief     This is a test header file for a demo.
* \details   This header defines the MyClass class.
* \author    Marco v spengen
* \version   0.1
* \date      11-9-2025
*/

/*!
* \class MyClass
* \brief A simple demonstration class.
* \details This class is used to show how to structure a class for Doxygen documentation.
* It also includes an example of how to document a member variable.
*/
class MyClass {
public:
    /*!
    * \fn int sum(int a, int b)
    * \brief sums two ints.
    * \details This method takes two integers and returns their sum.
    * \code
    * MyClass obj;
    * int result = obj.sum(5, 10); // result will be 15
    * \endcode
    * \param a The first integer.
    * \param b The second integer.
    * \return The sum of a and b.
    * \note This is a simple note to show off the note command.
    */
    int sum(int a, int b);
};