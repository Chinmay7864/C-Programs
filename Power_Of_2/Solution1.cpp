#include<iostream>
#include<cmath>
using namespace std;

bool powerOf2(int num){
    int ans = 1;
    for (int i = 0; i < 31; i++){
        ans = ans*2;
        if (ans == num){
            return true;
        }
        if (ans > num){
            return false;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    if (powerOf2(n)){
        cout<<"Power of 2";
    }
    else{
        cout<<"Not a power of 2";
    }
    return 0;
}