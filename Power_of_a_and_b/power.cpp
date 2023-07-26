#include<iostream>
using namespace std;

int power(int a,int b){
    if (b == 1){
        return a;
    }
    else if (b == 0){
        return 1;
    }
    int ans = 1;
    for (int i=1; i <= b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int a, b;
    cout<<"Enter a and b ";
    cin>>a>>b;
    cout<<a<<" raised to "<<b<<" is "<<power(a,b);
    return 0;
}