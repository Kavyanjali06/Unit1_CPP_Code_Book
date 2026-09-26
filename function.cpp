#include <iostream>              // Includes the input/output library

using namespace std;             // Allows us to use cout and endl directly

int add(int, int);               // Function declaration (prototype)
                                 // Tells the compiler that add() takes two integers
                                 // and returns an integer

int main() {                     // Main function: program execution starts here

    int a = 10, b = 20;          // Declares two integer variables and assigns values

    cout << "Sum = " << add(a, b) << endl;
                                 // Calls the add() function with a and b
                                 // Displays the returned sum

    return 0;                    // Ends the program successfully
}

int add(int x, int y) {          // Function definition
                                 // x and y receive the values of a and b

    return x + y;                // Adds x and y and returns the result
}
