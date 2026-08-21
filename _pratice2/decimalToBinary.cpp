#include<iostream>
using namespace std;

string decimalToBinary(int n){
    string binary = "";
    while(n!=0){
        int reminder = n%2;
        char ch = reminder + '0';
        binary = ch + binary;
        n /= 2;
    }
    return binary;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<decimalToBinary(num);

    return 0;
}