#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int cols = 6;  

    for (int i = 1; i <= rows; i++) {      
        for (int j = 1; j <= cols; j++) {   
            
            if (i == 1 || i == 4 || j == 1 || j == 6) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}