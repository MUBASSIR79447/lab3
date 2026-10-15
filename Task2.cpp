
#include <iostream>
#include <string>
#include <limits>
using namespace std;

/*
A variable stores data.
cin takes input from the user.
cout displays output on the screen.
*/

int main() {
    // Declare variables
    string name;
    int age;
    float gpa;

    // Take input
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    // Display output
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}

