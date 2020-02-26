/*=============================================================================
 |   Assignment:  Module 4: Coffee Sales
 |
 |       Author:  Daniel O'Meara
 |     Language:  Project was written in C++
 |                CMake was the compiler used to build and test the project
 |   To Compile:  Honestly don't know how to explain this part yet, I just press
 |                the compile button inside of Visual Studio 2019
 |
 |        Class:  CIS 211
 |   Instructor:  Michael Parker
 |     Due Date:  2/7/2020
 |
 +-----------------------------------------------------------------------------
 |
 |  Description:  Write a program that asks for the number of pounds purchased
 |				  and computes the total cost of purchase.
 |
 |        Input:  This program requires the user to input values for one variable:
 |                Amount of coffee purchased in pounds
 |
 |       Output:  The program will output the total of the sale based on the cost
 |				  per bag of coffee, the calculated discount, the calculated
 |				  discounted sale, and the total savings for that purchase
 |
 |    Algorithm:  Initialize variables, collect input and store in variable,
 |                calculate the total sale price, use if-else statements to
 |				  determine the discount, calculate the discounted sale, output the
 |				  relavant information
 |
 |   Required Features Not Included:  None
 |
 |   Known Bugs:  None
 |
 *===========================================================================*/

#include <iostream>

using namespace std;

// simple function to print a header bar that shows what company this is for
void printHeader()
{
	cout << "-----------------------------------" << endl;
	cout << "            Coffee Shop            " << endl;
	cout << "-----------------------------------" << endl;
}

int main() 
{
	// initialize variables
	int poundsOfCoffee;
	double totalSale;
	double discountedSale;
	double discount;
	
	// constant variable to hold the cost per coffee bag
	const double costOfCoffee = 12.99;

	// call to the printHeader function declared above
	printHeader();
	// ask user to input the amount of coffee purchased
	cout << "How many pounds of coffee" << endl;
	cout << " > ";
	cin >> poundsOfCoffee;

	// clear the console
	system("cls");

	// calculate total coffee sale
	totalSale = poundsOfCoffee * costOfCoffee;

	// calculate discount if any
	if (poundsOfCoffee > 29) 
	{
		discount = 0.2;
	} 
	else if (poundsOfCoffee > 19)
	{
		discount = 0.15;
	}
	else if (poundsOfCoffee > 9)
	{
		discount = 0.1;
	}
	else if (poundsOfCoffee > 4) 
	{
		discount = 0.05;
	}
	else
	{
		discount = 0;
	}

	// calculate discounted sale
	discountedSale = totalSale - (totalSale * discount);

	// print header and show the cost of the coffe without a discount
	printHeader();
	cout << "Cost of Coffee without discount" << endl;
	cout << " > $" << totalSale << endl;

	cout << endl;

	if (totalSale == discountedSale) 
	{
		// if there is no discount inform the user
		cout << "Didn't buy enough coffee" << endl;
		cout << "to qualify for a discount" << endl;
	}
	else
	{
		// if there is a discount then inform the user and show what the discount is
		cout << "You qualify for a..." << endl;
		cout << " > " << (discount * 100) << "%" << " discount" << endl;
		cout << endl;
		cout << "Discounted cost..." << endl;
		cout << " > $" << discountedSale << endl;
		cout << endl;
		cout << "Total savings..." << endl;
		cout << " > $" << (totalSale - discountedSale) << endl;
	}

	cout << endl;

	system("pause");
	return 0;
}