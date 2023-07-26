#include<iostream>
#include<cmath>
using namespace std;

int toDecimal(int num){
    int ans = 0, i = 0;
    while (num != 0){
        int bit = num & 1;
        if (bit == 1){
            ans = pow(2,i) + ans;
        }
        i += 1;
        num = num / 10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a binary number ";
    cin>>n;
    cout<<"Decimal representation is "<<toDecimal(n)<<endl;
    return 0;
}