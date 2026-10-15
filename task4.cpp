
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int age;
    int birthYear;

    cout << "Enter your age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "\nYour age: " << age << endl;
    cout << "Your birth year: " << birthYear << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}

