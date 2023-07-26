#include<iostream>
#include<cmath>
using namespace std;

int toBinary(int num){
    int ans = 0, i = 0;
    while (num != 0){
        int bit = num & 1;
        ans = (bit * pow(10,i)) + ans;
        i += 1;
        num = num >> 1;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter decimal number ";
    cin >> n;
    int ans = toBinary(n);
    cout<<"Binary representation is "<<ans<<endl;
    return 0;
}