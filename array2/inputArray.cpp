#include<iostream>
using namespace std;

int main(){
     int size;
     cout<<"Enter the size of array: ";
     cin>>size;

     int arr[size];

     for(int i = 0; i < size; i ++){
          cout<<"Enter the elemnt of index "<< i <<" : ";
          cin>>arr[i];
     }

     cout<<"Array is : [ ";
     for(auto x: arr){
          cout<< x<<" ";
     }
     cout<<"]";

     return 0;
}