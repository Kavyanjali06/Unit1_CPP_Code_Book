#include <iostream>                  // Includes the input/output library

using namespace std;                 // Allows us to use cout directly

class Demo {                         // Defines a class named Demo

public:                              // Makes members accessible from outside the class

    Demo() {                          // Constructor of the Demo class
        cout << "Constructor called\n"; // Prints message when constructor is called
    }                                 // End of constructor

    ~Demo() {                         // Destructor of the Demo class
        cout << "Destructor called\n";  // Prints message when destructor is called
    }                                 // End of destructor

};                                    // End of Demo class

int main() {                          // Main function: program execution starts here

    Demo d;                           // Creates object d
                                      // Constructor is automatically called here

    return 0;                         // Ends main function
                                      // Object d is destroyed here

}                                     // Destructor is automatically called here
