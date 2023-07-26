#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for (int i = 1; i <= num; i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int n_r_fact = factorial(n-r);
    int ans = (n_fact)/(r_fact * n_r_fact);
    return ans;
}

int main(){
    int n,r;
    cout<<"Enter n and r "<<endl;
    cin>>n>>r;
    cout<<"nCr is "<<nCr(n,r)<<endl;
    return 0;
}