#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

//Primary functions
int main() {

    //intitialization of string variable
    string var;

    //Integer variable which will store the the times a character appears
    int indexes[128] = {0}; 

    // Tells User to Input a string
    cout << "Please enter a string: ";

    //Reads input from user and stores it in the string variable, var. getline is a function for inputs from the string library.
    getline(cin, var); 

    // Convert the string to uppercase. This makes for easier counting later.
    transform(var.begin(), var.end(), var.begin(), ::toupper);

    // Count the the occurance of each character
    for (char c : var) {
        indexes[(int)c] += 1;
    }

    // Find the most common character
    int max_index = 0;
    for (int i = 1; i < 128; i++) {
        if (indexes[i] > indexes[max_index]) {
            max_index = i;
        }
    }

    // Print the most common character and its frequency
    cout << "'" << char(max_index) << "' " << indexes[max_index] << endl;

    return 0;
}