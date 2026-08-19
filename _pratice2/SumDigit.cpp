#include<iostream>
using namespace std;

int main(){
    int num = 1234;
    int sum = 0;
    while (num != 0)
    {
        int rem = num%10;
        sum+=rem;
        num/=10;
    }
    
    cout<<sum;
}