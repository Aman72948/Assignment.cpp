#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms (N): ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int a = 0, b = 1;

    cout << "First " << n << " terms of the Fibonacci series: ";

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return 0;
}