
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    char grade = 'A';
    double fee = 12500.75;

    cout << fixed << setprecision(2);

    cout << "Student Information" << endl;
    cout << "-------------------" << endl;

    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    cout << "\nPress Enter to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}

