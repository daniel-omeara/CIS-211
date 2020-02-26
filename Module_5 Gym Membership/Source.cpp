/*=============================================================================
 |   Assignment:  Module 5: Gym Membership
 |
 |       Author:  Daniel O'Meara
 |     Language:  Project was written in C++
 |                CMake was the compiler used to build and test the project
 |   To Compile:  Honestly don't know how to explain this part yet, I just press
 |                the compile button inside of Visual Studio 2019
 |
 |        Class:  CIS 211
 |   Instructor:  Michael Parker
 |     Due Date:  2/21/2020
 |
 +-----------------------------------------------------------------------------
 |
 |  Description:  Write a program that calculates a rate increase for a gym membership
 |
 |        Input:  This program requires no input
 |
 |       Output:  The program will output the original membership price as well
 |                as the calculated increased membership price at the end of each year
 |
 |    Algorithm:  Initialize the variable, ouput the original membership price, start loop
 |                multiply the original price by 1.02 then display current year and new
 |                membership price, loop through for each of the three years
 |
 |   Required Features Not Included:  None
 |
 |   Known Bugs:  None
 |
 *===========================================================================*/

#include <iostream>

using namespace std;

int main() 
{
    // initialize the membership price
	double membershipPrice = 600;

    // ouput the original membership price
	cout << "Beginning Membership Price: $" << membershipPrice << endl;

    // start loop, loops through 3 times starting at 1 ending at 3
	for (int i = 1; i < 4; i++) 
	{
        // multiply the current membership price by 1.02 
		membershipPrice *= 1.02;

        // output the new membership price
		cout << "Year " << i << " Membership Price: $" << membershipPrice << endl;
	}

	system("pause");
	return 0;
}