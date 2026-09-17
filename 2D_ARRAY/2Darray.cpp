#include<iostream>
using namespace std;

int main(){
     int row, col;
     cout<<"Enter number of row: ";
     cin>>row;

     cout<<"Enter number of column: ";
     cin>>col;

     int arr[row][col];

     // outer loop for row and inner for col

     cout<<"Enter the elements"<<endl;
     for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
               cin>> arr[i][j];
          }
     }


     cout<<"Entered array: "<<endl;
     for(int i = 0; i < row; i++){
          for(int j = 0; j < col; j++){
               cout<<arr[i][j]<<" ";
          }
          cout<<endl;
     }

     return 0;

}