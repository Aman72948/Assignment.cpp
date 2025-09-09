#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 6;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "*";
            if (j != cols - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}