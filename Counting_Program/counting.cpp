#include<iostream>
using namespace std;

void counting(int num){
    for (int i = 1; i <= num; i++){
        cout<<i<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number ";
    cin>>n;
    counting(n);
    return 0;
}