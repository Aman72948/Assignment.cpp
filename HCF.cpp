#include <iostream>
using namespace std;

int calculateHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "Please enter positive integers only." << endl;
        return 1;
    }

    int hcf = calculateHCF(num1, num2);
    cout << "HCF of " << num1 << " and " << num2 << " is: " << hcf << endl;

    return 0;
}