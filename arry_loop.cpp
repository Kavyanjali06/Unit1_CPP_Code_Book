#include <iostream>              // Includes the input/output library

using namespace std;             // Allows us to use cout without writing std::

int main() {                     // Main function: program execution starts here

    int marks[5] = {78, 82, 91, 67, 88};  // Creates an array of 5 integers and stores marks

    for (int i = 0; i < 5; i++) {         // Loop runs from i = 0 to i = 4

        cout << marks[i] << " ";           // Prints each element of the array

    }                                      // End of for loop

    return 0;                              // Ends the program successfully
}
