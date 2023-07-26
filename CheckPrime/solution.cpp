#include<iostream>
using namespace std;

bool isPrime(int num){
    for (int div = 2; div < num; div++){
        if (num % div == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    if (isPrime(n)){
        cout<<"Prime number ";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}