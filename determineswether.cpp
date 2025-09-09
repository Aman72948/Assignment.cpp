#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "The given lengths do not form a triangle." << endl;
    }

    if (a == b && b == c) {
        cout << "The triangle is equilateral." << endl;
    } 
    else if (a == b || b == c || a == c) {
        cout << "The triangle is isosceles." << endl;
    } 
    else {
        cout << "The triangle is scalene." << endl;
    }

    return 0;
}