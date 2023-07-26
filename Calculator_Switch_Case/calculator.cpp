#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter 2 numbers "<<endl;
    cin>>num1>>num2;
    char ch;
    cout<<"Enter operator "<<endl;
    cin>>ch;
    switch(ch){
        case '+' : cout<<num1+num2<<endl;
                    break;
        case '-' : cout<<num1-num2<<endl;
                    break;
        case '*' : cout<<num1*num2<<endl;
                    break;
        case '/' : cout<<num1/num2<<endl;
                    break;
        case '%' : cout<<num1%num2<<endl;
                    break;
        default: cout<<"Enter a valid operator"<<endl;
    }
    return 0;
}