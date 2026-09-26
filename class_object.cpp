#include <iostream>              // Includes the input/output library
                                  // Needed for cout and endl

using namespace std;             // Allows us to use cout, string, etc. directly

class Student {                  // Defines a class named Student

public:                          // Makes the following members accessible from outside

    string name;                 // Declares a string variable to store student's name

    int age;                     // Declares an integer variable to store student's age

    void show() {                // Defines a member function named show()

        cout << name << " " << age << endl;
                                  // Displays the student's name and age

    }                             // End of show() function

};                                // End of Student class
                                  // Semicolon is required after a class definition

int main() {                      // Main function: program execution starts here

    Student s1;                   // Creates an object s1 of the Student class

    s1.name = "Amit";             // Assigns "Amit" to the name of object s1

    s1.age = 20;                  // Assigns 20 to the age of object s1

    s1.show();                    // Calls the show() function using object s1

    return 0;                     // Ends the program successfully
}
