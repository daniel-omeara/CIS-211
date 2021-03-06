/*=============================================================================
 |   Assignment:  Module 3: Movie Theater Revenue Calculator
 |
 |       Author:  Daniel O'Meara
 |     Language:  Project was written in C++
 |                CMake was the compiler used to build and test the project
 |   To Compile:  Honestly don't know how to explain this part yet, I just press
 |                the compile button inside of Visual Studio 2019
 |
 |        Class:  CIS 211
 |   Instructor:  Michael Parker
 |     Due Date:  1/29/2020
 |
 +-----------------------------------------------------------------------------
 |
 |  Description:  Write a program that calculates and displays a movie theaters
 |				  revenue generated from a single movie and it's ticket sales
 |
 |        Input:  This program requires the user to input values for five variables:
 |                The name of the movie
 |				  The cost per adult ticket
 |				  The cost per child ticket
 |				  The number of adult tickets sold
 |				  The number of child tickets sold
 |
 |       Output:  The program will gather up all of the inputted values, calculate
 |				  the gross revenue, the amount to be paid to the distributors of
 |				  the movie, and the net revenue generated by the movie.
 |				  The program will display all of this information in one generated
 |				  report.
 |
 |    Algorithm:  Initialize variables, clear the screen, display the requirements
 |				  of the program to the user, gather user inputs, make a call to
 |				  the generateReport() function, calculate the gross revenue
 |				  (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold)
 |				  then display the information gathered and calulated about the movie
 |				  in one clear and concise report
 |
 |   Required Features Not Included:  None
 |
 |   Known Bugs:  None
 |
 *===========================================================================*/

#include <iostream>
#include <string>

using namespace std;

// Made this function to help with the displaying of the report and its formatting
void generateReport(string movieTitle, double adultTicketPrices, double childTicketPrices, int adultTicketsSold, int childTicketsSold) 
{
	// system call to clear the screen of anything unnecessary
	system("cls");
	
	// calculate and store the gross revenue from ticket sales and the amount paid to the distributor
	// as well as the net revenue overall
	double grossRevenue = (adultTicketPrices * adultTicketsSold) + (childTicketPrices * childTicketsSold);
	double paidToDistributor = grossRevenue * .25;
	double netRevenue = grossRevenue - paidToDistributor;

	// Displaying the gathered and calculated information in a nice neat report
	cout << "Movie Name: \"" << movieTitle << "\"" << endl;
	cout << "Adult Ticket Price: $" << adultTicketPrices << endl;
	cout << "Child Ticket Price: $" << childTicketPrices << endl;
	cout << "Adult Tickets Sold: " << adultTicketsSold << endl;
	cout << "Child Tickets Sold: " << childTicketsSold << endl;
	cout << "Gross Box Office Revenue: $" << grossRevenue << endl;
	cout << "Amount Paid to Distributor: -$" << paidToDistributor << endl;
	cout << "Net Box Office Revenue: $" << netRevenue << endl;
}

int main() 
{
	// I learned batch programming a very long time ago, I'm just showing off a bit lol
	system("title Dan's Movie Theater");

	// Declaring main variables to store user inputs for important information
	string movieTitle;
	double adultTicketPrices = 0;
	double childTicketPrices = 0;
	int adultTicketsSold = 0;
	int childTicketsSold = 0;

	// this is just to clear the screen of anything unnecessary
	system("cls");

	// Main console output for gathering up user inputs
	cout << "Daniel's Movie Theater" << endl;
	cout << "----------------------" << endl;
	cout << "What is the name of the movie?" << endl;
	cout << ">";

	// had to use getline(cin, movieTitle); here because I was running into issues getting a string
	// from the user using just cin
	getline(cin, movieTitle);

	cout << "What is the price of one adult ticket?" << endl;
	cout << ">";
	cin >> adultTicketPrices;
	cout << "What is the price of one child ticket?" << endl;
	cout << ">";
	cin >> childTicketPrices;
	cout << "How many adult tickets were sold?" << endl;
	cout << ">";
	cin >> adultTicketsSold;
	cout << "How many child tickets were sold?" << endl;
	cout << ">";
	cin >> childTicketsSold;

	// Call to the generateReport() function that I declared above
	generateReport(movieTitle, adultTicketPrices, childTicketPrices, adultTicketsSold, childTicketsSold);

	system("pause");
	return 0;
}