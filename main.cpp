#include "main.hpp"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

/*
Function Description: Function to count the occurrences of characters in a string
Parameters: Const string is the input that will be counted but not modified, the int indexes array stores the counts of the ascii characters
Return Types: Void (No return)
*/
void count_characters(const string& str, int indexes[128]) {
    fill(indexes, indexes + 128, 0); // resets arrayby setting all values to 0
    for (char c : str) { //iterates over each character and adds 1 to the count
        indexes[(int)c] += 1;
    }
}

/*
Function Description: Function to find the most common character that appears in the (already counted) array
Parameters: Accepts constant array of integers which can't be modified. The number at each index represents the number of appearances of that ASCII character
Return Types: Char type which appeared the most often.
*/
char find_most_common_char(const int indexes[128]) {
    int max_index = 0;
    for (int i = 1; i < 128; i++) {
        if (indexes[i] > indexes[max_index]) {
            max_index = i;
        }
    }
    return (char)max_index;
}
/*
Function Description: Primary function that initializes array, converts string to uppercase, counts characters, finds the most common character, and then returns the results back to main.
Parameters: constant string is the input to be processed. It can't be modified 
Return Types: returns a string that contains the most common character (in uppercase) and the number of times that character appears
*/
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

/*
Function Description: This main function combines the command line arguements into a string that will be processed. It initializes and processes the string before returning the final result.
Parameters: integer argc which is the number of command line arguments, char* argv[] which is the character array of command line arguments
Return Types: returns int 0 (successful execution)
*/
int main(int argc, char* argv[]) {
    
    string combined; //initialize empty string to combine command arguements

    // Iterate through all arguments
    for (int i = 1; i < argc; ++i) {
        combined += argv[i];  // Add argument to the string
        if (i < argc - 1) {
            combined += " ";  // Add a space between arguments
        }
    }

    //Store the combined string in an easy variable, var
    string var = combined;

    // Tells User to Input a string (Not being used)
    //cout << "Please enter a string: ";
    //getline(cin, var);

    // Process the string and print the result
    cout << process_string(var) << endl;

    //successful execution
    return 0;
}