#include<iostream>
using namespace std;

void PrintFib(int n){
     int p1 = 0;
     int p2 = 1;
     
     cout<<p1<<" "<<p2<<" ";
     for(int i = 2; i < n; i++){
          int curr = p1+p2;
          cout<<curr<<" ";
          p1=p2;
          p2=curr;
     }
}

int main(){
     int n = 10;
     PrintFib(n);
}