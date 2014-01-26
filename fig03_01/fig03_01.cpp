#include <iostream>
using namespace std;

// Gradebook class Definition
class Gradebook
{
public:
    // Welcome message
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    }
};

int main()
{
    Gradebook myGradeBook;
    myGradeBook.displayMessage();
}