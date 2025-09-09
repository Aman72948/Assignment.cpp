#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i=2; i*i<=n; ++i) {
        if(n % i == 0)
        return false;
    }

    return true;
}

int main() {

    cout<<"Prime number under 100 are: \n";
    for(int num=2; num<100; ++num) {
        if(isPrime(num)) {
            cout<<num<<" ";
        }
    }
    cout<<endl;

    return 0;
}