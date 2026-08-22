#include<iostream>
#include<vector>
using namespace std;

int main(){
     vector<int> arr;

     for(int i = 0; i <= 12; i++){
          arr.push_back(i);  // to add values at back of array
     }

     cout<<"\n> Is the array empty : "<<arr.empty()<<endl; // empty() to check if the vector is empty of not
3
     cout<<"> Array: ";
     for(auto x: arr){
          cout<<x<<" ";
     }

     cout<<"\n> Size of vector: "<<arr.size()<<endl; 

     arr.pop_back(); // used to delete single element from last

     cout<<"\n> Array: ";
     for(auto x: arr){
          cout<<x<<" ";
     }

     cout<<"\n> Size of vector: "<<arr.size()<<endl;  // size() used to check size of vector


     cout<<"\n> Last element: "<<arr.back(); // back() to select the last element
     cout<<"\n> First element: "<<arr.front(); // first() to select the first element

     arr.clear(); // to clear the array;
     cout<<"\n> Array: ";
     for(auto x: arr){
          cout<<x<<" ";
     }

     cout<<"\n> Is the array empty : "<<arr.empty()<<endl; // empty() to check if the vector is empty of not
     return 0;
}