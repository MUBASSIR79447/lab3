#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float gpa;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    cin.ignore();
    cout << "\nPress Enter to exit...";
    cin.get();

    return 0;
}
