#include <iostream>                  // Includes the input/output library

using namespace std;                 // Allows us to use cout directly

class Student {                      // Defines a class named Student

public:                              // Makes the following members accessible

    static int count;                // Declares a static data member named count
                                     // It is shared by all objects of the class

    Student() {                       // Constructor of Student class
        count++;                      // Increases count by 1 whenever an object is created
    }

};                                    // End of Student class

int Student::count = 0;              // Defines and initializes the static variable
                                     // Initial value of count is 0

int main() {                          // Main function: program execution starts here

    Student s1, s2, s3;               // Creates 3 Student objects
                                     // Constructor runs 3 times
                                     // count becomes 3

    cout << Student::count;           // Displays the value of static count

    return 0;                         // Ends the program successfully
}
