#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter amount ";
    cin >> amount;
    int hundred = 0, fifty = 0, twenty = 0, ten = 0, one = 0;
    switch(1){
        case 1 : hundred = amount / 100;
                 amount = amount - (hundred * 100);
        case 2 : fifty = amount / 50;
                 amount = amount - (fifty * 50);
        case 3 : twenty = amount / 20;
                 amount = amount - (twenty * 20);
        case 4 : ten = amount / 10;
                 amount = amount - (ten * 10);
        case 5 : one = amount / 1;
                 amount = amount - (one * 1);
    }
    cout<<"You will require "<<hundred<<" notes of 100, "<<fifty<<" notes of 50, "<<twenty<<" notes of 20, "<<ten<<" notes of 10, "<<one<<" notes of 1";
    return 0;
}