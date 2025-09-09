#include <iostream>
using namespace std;

bool isFibonacci(int num) {
    if (num < 0) return false;

    int a = 0, b = 1;
    if (num == a || num == b) return true;

    int c = a + b;
    while (c <= num) {
        if (c == num) return true;
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num)) {
        cout << num << " is in the Fibonacci series." << endl;
    } else {
        cout << num << " is NOT in the Fibonacci series." << endl;
    }

    return 0;
}