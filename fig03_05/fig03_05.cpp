// Fig. 3.5: fig03_05.cpp
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Set course name
    void setCourseName(string name)
    {
        courseName = name;
    }

    // Get course name
    string getCourseName()
    {
        return courseName;
    }

    // function that displays a welcome message to the GradeBook user 
    void displayMessage(string courseName)
    {
        cout << "Welcome to the grade book for\n" << getCourseName() << "!"
            << endl;
    } // end function displayMessage
private:
    string courseName;
}; // end class GradeBook  

// function main begins program execution
int main()
{
    string nameOfCourse; // string of characters to store the course name
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    // prompt for and input course name
    cout << "Please enter the course name:" << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse);

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
} // end main



/**************************************************************************
* (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
* Pearson Education, Inc. All Rights Reserved.                           *
*                                                                        *
* DISCLAIMER: The authors and publisher of this book have used their     *
* best efforts in preparing the book. These efforts include the          *
* development, research, and testing of the theories and programs        *
* to determine their effectiveness. The authors and publisher make       *
* no warranty of any kind, expressed or implied, with regard to these    *
* programs or to the documentation contained in these books. The authors *
* and publisher shall not be liable in any event for incidental or       *
* consequential damages in connection with, or arising out of, the       *
* furnishing, performance, or use of these programs.                     *
**************************************************************************/