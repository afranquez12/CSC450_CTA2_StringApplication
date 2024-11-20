//============================================================================
// Name        : CSC450_CTA2_StringApplicaiton.cpp
// Author      : Abnel Franquez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
    Program: String Concatenation Application
    Purpose: This program takes two string inputs from the user, concatenates them,
             and prints the resulting output to the screen. It repeats this process
             three times to handle varying string lengths. This program demonstrates
             basic string manipulation and user input handling in C++.

    Features:
    - Accepts string inputs with spaces using `getline`.
    - Concatenates two strings using the `+` operator.
    - Handles varying input lengths in multiple iterations.
*/

#include <iostream>  // Include input-output library
#include <string>    // Include string library for handling strings

using namespace std;

int main() {
    // Loop to take inputs 3 times
    for (int i = 1; i <= 3; i++) {
        cout << "Iteration " << i << ":\n";

        // Declare variables for string inputs
        string string1, string2;

        // Take two string inputs from the user
        cout << "Enter the first string: ";
        getline(cin, string1);  // Use getline to handle spaces in strings
        cout << "Enter the second string: ";
        getline(cin, string2);

        // Concatenate the strings
        string concatenatedString = string1 + string2;

        // Print the resulting concatenated string
        cout << "The concatenated string is: " << concatenatedString << endl << endl;
    }

    return 0;  // Indicate successful program termination
}
