#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n){
    int sum = 0;
    int count = 0;

    while ( n != 0)
    {
        int reminder = n%10;
        sum+= reminder*pow(2,count);
        count++;
        n /= 10;
    }

    return sum;
    
}

int main(){
    int binary;
    cout<<"Enter the Binary number: ";
    cin>>binary;

    cout<<"Decimal number is "<<binaryToDecimal(binary)<<endl;

    return 0;
}