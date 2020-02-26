/*=============================================================================
 |   Assignment:  Module 2: Grocery Bill
 |
 |       Author:  Daniel O'Meara
 |     Language:  Project was written in C++
 |                CMake was the compiler used to build and test the project
 |   To Compile:  Honestly don't know how to explain this part yet, I just press
 |                the compile button inside of Visual Studio 2019
 |
 |        Class:  CIS 211
 |   Instructor:  Michael Parker
 |     Due Date:  1/24/2020
 |
 +-----------------------------------------------------------------------------
 |
 |  Description:  Write a program that calculates the total spent on five items
 |                at a grocery store including sales tax.
 |
 |        Input:  This program requires the user to input values for three variables:
 |                The amount spent on bananas
 |                The amount spent on cookies
 |                The amount spent on coffee beans
 |                The amount spent on coca cola
 |                The amount spent on cake mix
 |
 |       Output:  The program will output the sum of the five grocery items, then will
 |                calculate and output the 6% sales tax applied to that sum, then will
 |                add the subtotal and sales tax together and output that total.
 |
 |    Algorithm:  Initialize variables, collect inputs and store in variables,
 |                add up inputs store in subtotal, output subtotal, 
 |                multiply subtotal by 0.06 and store in salesTax, output salesTax,
 |                add subtotal and salesTax and store in total, output total.
 |
 |   Required Features Not Included:  None
 |
 |   Known Bugs:  None
 |
 *===========================================================================*/

// including the header file that allows us to use the console to display information
#include <iostream>

// declare the namespace std so that I may use the cout and cin functions
using namespace std;

int main()
{
	// Variables for the five products
	double bananas, cookies, coffee, cocaCola, cakeMix;

	// Variables for totals
	double subtotal, salesTax, total;

	// Display shown to the user and getting the inputs from the user
	cout << "Joe's Market" << endl;
	cout << "--------------------" << endl;
	cout << "Enter the price you paid for the following products" << endl;
	cout << endl;
	cout << "Bananas: ";
	cin >> bananas;
	cout << "Cookies: ";
	cin >> cookies;
	cout << "Coffee Beans: ";
	cin >> coffee;
	cout << "Coca Cola: ";
	cin >> cocaCola;
	cout << "Cake Mix: ";
	cin >> cakeMix;
    cout << endl;

    // Calculate and display the subtotal
	subtotal = bananas + cookies + coffee + cocaCola + cakeMix;
	cout << "Subtotal: " << subtotal << endl;
	
    // Calculate and display the sales tax
	salesTax = subtotal * 0.06;
	cout << "Sales Tax: " << salesTax << endl;

    // calculate and display the total
	total = subtotal + salesTax;
	cout << "Total: " << total << endl;

    // simple command to pause the console so that the program gives 
    // the user time to look at the calculated data
	system("pause");
	return 0;
}