#include <iostream>              // Includes the input/output library

using namespace std;             // Allows us to use cout without std::

int main() {                     // Main function: program execution starts here

    int marks = 45;              // Declares an integer variable and stores marks

    if (marks >= 40) {           // Checks whether marks are greater than or equal to 40

        cout << "Pass";          // Displays "Pass" if the condition is true

    } else {                      // Executes when the if condition is false

        cout << "Fail";          // Displays "Fail" if marks are less than 40
    }

    return 0;                    // Ends the program successfully
}
