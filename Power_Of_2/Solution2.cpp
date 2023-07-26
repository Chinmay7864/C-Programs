#include<iostream>
using namespace std;

bool isPowerOf2(int num){
    int count = 0;
    while (num != 0){
        int bit = num & 1;
        if (bit == 1){
            count += 1;
        }
        num = num>>1;
    }
    if (count == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    if (isPowerOf2(n)){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
    return 0;
}