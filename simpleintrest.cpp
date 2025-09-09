#include<iostream>
using namespace std;

int main() {
    double principal, rate, time;

    cout<<"Enter principal amount:";
    cin>>principal;

    cout<<"Enter rate of interest (in %):";
    cin>>rate;

    cout<<"Enter time (in years):";
    cin>>time;

    double simpleInterest = (principal * rate * time) / 100.0;

    cout<<"Simple Interest:"<<simpleInterest<<endl;

    return 0;
}