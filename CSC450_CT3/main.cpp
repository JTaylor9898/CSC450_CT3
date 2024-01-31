/* CSC450 Critical Thinking Assignment: Integer Pointers Program */
#include <iostream>
using namespace std;

void printer(int *pointer);

int main() {
    // Initializing variables
    int valueOne;
    int valueTwo;
    int valueThree;

    // Initializing pointers
    int *pointerOne = new int;
    int *pointerTwo = new int;
    int *pointerThree = new int;


    // User input for integer variables
    cout << "Enter first value:"; // prompt for user input
    cin >> valueOne; // user input
    cout << "Enter second value:";
    cin >> valueTwo;
    cout << "Enter third value:";
    cin >> valueThree;

    // Assign pointers to values
    *pointerOne = valueOne;
    *pointerTwo = valueTwo;
    *pointerThree = valueThree;

    // Print pointers and values
    printer(pointerOne);
    printer(pointerTwo);
    printer(pointerThree);

    // Delete pointers for memory management purposes
    delete pointerOne;
    delete pointerTwo;
    delete pointerThree;
    cout << "Job is done." << endl;
}

// function for printing pointers' address and variable data
void printer(int *pointer) {
    cout << *pointer << " : " << pointer << endl;
}
