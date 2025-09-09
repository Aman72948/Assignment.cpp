#include<iostream>
using namespace std;

int main() {

    const double PI = 3.14;
    double radius;

    cout<<"Enter the radius of the circle:";
    cin>>radius;

    double circumference = 2 * PI * radius;

    cout<<"Circumference of the circle:"<<circumference<<endl;

    return 0;
}