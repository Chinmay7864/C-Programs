#include<iostream>
using namespace std;

int reverseInteger(int num){
    int ans = 0;
    while (num != 0){
        int rem = num % 10;
        ans = (ans * 10) + rem;
        num = num / 10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    cout<<"Reverse is "<<reverseInteger(n);
    return 0;
}