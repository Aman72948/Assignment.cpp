#include <iostream>
using namespace std;

int main() {
    int asciiCode;
    cout << "Enter an ASCII code (0-127): ";
    cin >> asciiCode;

    if (asciiCode >= 0 && asciiCode <= 127) {
        char ch = static_cast<char>(asciiCode);
        cout << "The character for ASCII code " << asciiCode << " is " << ch << " " << endl;
    } else {
        cout << "Invalid ASCII code! Please enter a value between 0 and 127." << endl;
    }

    return 0;
}