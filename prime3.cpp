#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int nextNum = num + 1;
    while (!isPrime(nextNum)) {
        ++nextNum;
    }

    cout << "The next prime number after " << num << " is " << nextNum << "." << endl;

    return 0;
}