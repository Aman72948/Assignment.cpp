#include <iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

bool isArmstrong(int num) {
    int originalNum = num;
    int digits = 0;
    int sum = 0;

    while (originalNum != 0) {
        originalNum /= 10;
        ++digits;
    }

    originalNum = num;

    while (originalNum != 0) {
        int remainder = originalNum % 10;
        sum += power(remainder, digits);
        originalNum /= 10;
    }

    return sum == num;
}

int main() {
    cout << "Armstrong numbers under 1000 are:\n";
    for (int i = 1; i < 1000; ++i) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}