#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    // Handle zero explicitly because log10(0) is undefined
    if (number == 0) {
        cout << "Number of digits: 1" << endl;
        return 0;
    }

    // Make number positive to count digits correctly
    if (number < 0) {
        number = -number;
    }

    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}