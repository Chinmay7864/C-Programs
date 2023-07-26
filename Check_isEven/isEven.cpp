#include<iostream>
using namespace std;

bool isEven(int n){
    if (n & 1){
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    if(isEven(n)){
        cout<<"Even number";
    }
    else{
        cout<<"Odd number";
    }
    return 0;
}