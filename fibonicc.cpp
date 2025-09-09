#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the term number (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int a = 0, b = 1, nthTerm;

    if (n == 1) {
        nthTerm = a;
    } 
    else if (n == 2) {
        nthTerm = b;
    } 
    else {
        for (int i = 3; i <= n; ++i) {
            nthTerm = a + b;
            a = b;
            b = nthTerm;
        }
    }

    cout << "The " << n << "th term of the Fibonacci series is: " << nthTerm << endl;
    
    return 0;
}