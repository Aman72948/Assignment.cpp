#include <iostream>
using namespace std;

bool isLeapYear(int year) {
   
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

int main() {
    int startYear, endYear;

    cout << "Enter the start year: ";
    cin >> startYear;

    cout << "Enter the end year: ";
    cin >> endYear;

    if (startYear > endYear) {
        cout << "Invalid range. Start year should be less than or equal to end year." << endl;
        return 1;
    }

    cout << "Leap years between " << startYear << " and " << endYear << " are:\n";

    bool foundLeapYear = false;
    for (int year = startYear; year <= endYear; ++year) {
        if (isLeapYear(year)) {
            cout << year << " ";
            foundLeapYear = true;
        }
    }

    if (!foundLeapYear) {
        cout << "None";
    }

    cout << endl;
    return 0;
}