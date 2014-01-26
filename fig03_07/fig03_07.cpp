// Fig. 3.7: fig03_07.cpp
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // Constructor
    GradeBook(string name)
    {
        setCourseName(name);
    }

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
    GradeBook gradeBook1("Course1");
    GradeBook gradeBook2("Course2");


    // display course names
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
} // end main
