#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string var;
    int indexes[128] = {0}; // array to store frequency of each character

    // Input a string
    cout << "Please enter a string: ";
    getline(cin, var); // safely read input string

    // Convert the string to uppercase
    transform(var.begin(), var.end(), var.begin(), ::toupper);

    // Count the frequency of each character
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