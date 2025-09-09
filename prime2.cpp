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
    int start, end;
    cout << "Enter two numbers (start and end): ";
    cin >> start >> end;

    if (start > end) {
        
        int temp = start;
        start = end;
        end = temp;
    }

    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}