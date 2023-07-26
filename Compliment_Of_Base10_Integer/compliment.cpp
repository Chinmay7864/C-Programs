#include<iostream>
using namespace std;

int compliment(int num){
    int mask = 0, temp = num;
    while (temp != 0){
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }
    int ans = (~num) & mask;
    return ans;
}

int main(){
    int num;
    cout<<"Enter number ";
    cin>>num;
    cout<<"compliment is "<<compliment(num);
    return 0;
}