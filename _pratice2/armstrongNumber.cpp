#include<iostream>
// #include<math.h>
// #include<bits/stdc++.h>

using namespace std;

int countDigit(int n){
    int count = 0;
    while (n != 0)
    {
        count++;
        n/=10;
    }
    return count;  
}


int pow(int b, int p){
    int pro = 1;
    for(int i = 0; i < p; i++){ 
        pro *= b;
    }
    return pro;
}

bool armstrong(int n){
    int ori =n;
    int count = countDigit(n);
    int sum = 0;
    while (n!=0)
    {
       int reminder = n%10;
       sum += pow(reminder,count);
        n/=10;
    }
    return ori == sum;
}

int main(){
    // cube of sum of every digit is equal to the digit

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(armstrong(num)){
    cout<<"The given number "<<num<<" is an armstrong"<<endl;
    } else{
        cout<<"The given number "<<num<<" is not an armstrong"<<endl;
    }
}