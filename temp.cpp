#include <iostream>
using namespace std;

int main() {
    char choice;
    double temperature, convertedTemp;

    cout << "Temperature Conversion Program\n";
    cout << "Enter 'F' to convert Fahrenheit to Celsius\n";
    cout << "Enter 'C' to convert Celsius to Fahrenheit\n";
    cout << "Your choice:";
    cin >> choice;

    if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemp = (temperature - 32) * 5.0 / 9.0;
        cout << temperature << " Fahrenheit is " << convertedTemp << " Celsius." << endl;
    } 
    else if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertedTemp = (temperature * 9.0 / 5.0) + 32;
        cout << temperature << " Celsius is " << convertedTemp << " Fahrenheit." << endl;
    } 
    else {
        cout << "Invalid choice. Please enter 'F' or 'C'." << endl;
    }

    return 0;
}