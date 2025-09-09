#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int maxWidth = n * 2; 

    for (int i = 1; i <= n; i++) {
        int stars = i;
        int lineWidth = stars * 2;
        int spaces = (maxWidth - lineWidth) / 2;

        
        for (int s = 0; s < spaces; s++) {
            cout << " ";
        }
        
        for (int k = 0; k < stars; k++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}