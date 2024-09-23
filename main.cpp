#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count the occurrences of characters in a string
void count_characters(const string& str, int indexes[128]) {
    fill(indexes, indexes + 128, 0); // Ensure array is reset
    for (char c : str) {
        indexes[(int)c] += 1;
    }
}

// Function to find the most common character
char find_most_common_char(const int indexes[128]) {
    int max_index = 0;
    for (int i = 1; i < 128; i++) {
        if (indexes[i] > indexes[max_index]) {
            max_index = i;
        }
    }
    return (char)max_index;
}

// Primary function that integrates all parts
string process_string(const string& input) {
    int indexes[128] = {0};

    // Convert the string to uppercase
    string var = input;
    transform(var.begin(), var.end(), var.begin(), ::toupper);

    // Count the occurrence of each character
    count_characters(var, indexes);

    // Find the most common character
    char most_common_char = find_most_common_char(indexes);

    // Return result as a string for easier testing
    return string(1, most_common_char) + " " + to_string(indexes[(int)most_common_char]);
}

int main(int argc, char* argv[]) {
    
    string combined;

    // Iterate through all arguments
    for (int i = 1; i < argc; ++i) {
        combined += argv[i];  // Add argument to the string
        if (i < argc - 1) {
            combined += " ";  // Add a space between arguments
        }
    }
    //Intitialize empty string variable
    string var = combined;

    // Tells User to Input a string
    //cout << "Please enter a string: ";
    //getline(cin, var);

    // Process the string and print the result
    cout << process_string(var) << endl;

    return 0;
}