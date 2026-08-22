#include<iostream>
using namespace std;

int main(){

     int n;
     cout<<"Enter the size of the array: ";
     cin>>n;

     int arr[n];
     int sum = 0;

     cout<<"Enter the element of array: ";
     for(int i = 0; i < n; i++){
          cin>>arr[i];
     }

     cout<<"> Given Array : ";
     for(int i = 0; i< n; i++){
          cout<<arr[i]<<" ";
     }

     cout<<"\n> Running sum of Array : ";
     for(int i = 0; i< n; i++){
          sum+= arr[i];
          cout<<sum<<" ";
     }

     cout<<"\n> Sum of ARRAY is: "<<sum<<endl;

     return 0;
}