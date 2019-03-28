/** Lab7.Tester.cpp
 *
 *	Use this program to test that your Lab7 functions work correctly.	
 *
 *	TO-DO: Update the information below
 *  @author		
 *  @author		
 *	@author		Thom MacDonald
 *	@version	2018.02 
 *	@since		11 Mar 2018 
 */

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

// TO-DO: Update to your group number.
#include "Lab7_Group99.h"

using namespace std;

int main()
{
	// Declarations
	const double MINIMUM = -99.9; // the minimum value accepted for user input
	const double MAXIMUM = 99.9;  // the maximum value accepted for user input
	const int COLUMN = 12;	// for output formatting
	double number; // to hold validated user input
	
	vector<string> testCases // strings to test your IsNumeric() function
	{
		// given:
		"123.45", // yes
		"chicken", // no
// TO-DO: Add more test cases to make sure your IsNumeric() function works.
		// additional:

	};
	
	/************************************************************** 	
	 * YOU SHOULD NOT NEED TO MODIFY ANYTHING BELOW THIS COMMENT  *
	 **************************************************************/
	
	// Output an information header
	cout << "Lab 7 - Strings" << endl
		 << "===============" << endl << endl;
	
	// Output column headings
	cout << left << setw(COLUMN) << "Test Case" << "Numeric?"<< endl
		 << setw(COLUMN) << "=========" << "========"<< endl << endl;
	
	// for each test string in the test cases vector
	for(auto testString: testCases)
	{
		// output the test string
		cout << left << setw(COLUMN) << testString;
		// if the test string is numeric
		if(Lab7::IsNumeric(testString))
		{
			// output "yes"
			cout << "yes" << endl;
		}
		else
		{
			// output "NO"
			cout << "NO" << endl;
		}
	}
	
	// Prompt the user to enter a real number
	cout << "\nEnter a number between " << MINIMUM << " and " << MAXIMUM 
		 << ", or enter anything else: ";
		 
	// Call your revised ReadDouble() function
	number = Lab7::ReadDouble(MINIMUM, MAXIMUM);
	
	// Output the number entered
	cout << fixed << setprecision(6) 
		 << "\nThank-you! The number you entered was " << number;
	
	// end of program.			 
	cout << endl << endl;
	return 0;
}
	

