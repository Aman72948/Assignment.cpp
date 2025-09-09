#include<iostream>
using namespace std;

int main() {

    int num1, num2;

    cout<<"Enter first integer:";
    cin>>num1;

    cout<<"Enter second integer:";
    cin>>num2;

    if(num2==0) {
        cout<<"Division by zero is not allowed."<<endl;
    }
    else {
        if(num1 % num2==0) {
            cout<<"is divisible by"<<num2<<" "<<endl;
        }
        else {
            cout<<num1<<"is not divisible by"<<num2<<" "<<endl;
        }
    }

    return 0;
}