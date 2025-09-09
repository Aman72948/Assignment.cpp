#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter the student's score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score entered. Please enter a score between 0 and 100." <<endl;
    } else if (score >= 90) {
        cout << "Grade: A" << std::endl;
    } else if (score >= 80) {
        cout << "Grade: B" << std::endl;
    } else if (score >= 70) {
        cout << "Grade: C" << std::endl;
    } else if (score >= 60) {
        cout << "Grade: D" << std::endl;
    } else {
        cout << "Grade: F" << std::endl;
    }

    return 0;
}