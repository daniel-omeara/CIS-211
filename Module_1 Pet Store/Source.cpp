/*=============================================================================
 |   Assignment:  Module 1: Pet Store
 |
 |       Author:  Daniel O'Meara
 |     Language:  Project was written in C++
 |                CMake was the compiler used to build and test the project
 |   To Compile:  Honestly don't know how to explain this part yet, I just press
 |                the compile button inside of Visual Studio 2019
 |
 |        Class:  CIS 211
 |   Instructor:  Michael Parker
 |     Due Date:  1/17/2020
 |
 +-----------------------------------------------------------------------------
 |
 |  Description:  Write a program that calculates how much a dog owner spent
 |                at the pet store
 |
 |        Input:  This program requires the user to input values for three variables:
 |                The cost of a leash
 |                The cost of a collar
 |                The cost of a bag of food
 |
 |       Output:  The program will output the total sum of all three of the inputted
 |                values
 |
 |    Algorithm:  Initialize variables, collect inputs and store in variables,
 |                add up inputs store in total, output total
 |
 |   Required Features Not Included:  None
 |
 |   Known Bugs:  None
 |
 *===========================================================================*/

#include <iostream>

int main()
{
	// Initialize the four main variables
	// Using "double" variable type because it allows us to input decimal values, which in this case works quite well for money!
	double leash, collar, bagOfFood, total;
	
	// Explain to the user how the application will work.
	std::cout << "Thank you for shopping at the pet store, please enter in the amount spent on the following items." << std::endl;
	std::cout << std::endl;
	
	// Prompt user for inputs for the three main variable types.
	std::cout << "Leash: $";
	std::cin >> leash;
	std::cout << "Collar: $";
	std::cin >> collar;
	std::cout << "Bag of Food: $";
	std::cin >> bagOfFood;
	std::cout << std::endl;

	// Perform an addition calculation on the three main variables to calculate the total spent in the store and display the output to the user.
	total = leash + collar + bagOfFood;
	std::cout << "Total spent at store..." << std::endl;
	std::cout << "$" << total << std::endl;

	system("pause");

	return 0;
}