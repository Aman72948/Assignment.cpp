#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3, num4;

    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    double largest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    if (num4 > largest) {
        largest = num4;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}