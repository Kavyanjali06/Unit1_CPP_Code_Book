#include <iostream>                  // Includes the input/output library

using namespace std;                 // Allows us to use cout directly

class Test {                         // Defines a class named Test

private:                             // Members below this are accessible only inside the class

    int value;                       // Declares a private integer variable named value

public:                              // Members below this can be accessed from outside the class

    Test(int v) {                    // Parameterized constructor
        value = v;                   // Assigns the value of v to the private variable value
    }

    inline int getValue() {          // Defines an inline member function
        return value;                // Returns the value of the private variable
    }

    friend void show(Test t);        // Declares show() as a friend function
                                     // It can access private members of Test

};                                   // End of Test class

void show(Test t) {                  // Defines the friend function show()

    cout << t.value;                 // Accesses and displays private member value
                                     // This is possible because show() is a friend function

}

int main() {                         // Main function: program execution starts here

    Test obj(50);                    // Creates object obj
                                     // Calls constructor with 50
                                     // value becomes 50

    cout << obj.getValue() << endl;  // Calls getValue() and displays 50

    show(obj);                       // Calls friend function show()
                                     // It also displays the value 50

    return 0;                        // Ends the program successfully
}
