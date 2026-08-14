#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> arr = {1,2,3,4,5};

    arr.push_back(16); // add element at last
    arr.pop_back(); //delete element from last
    
    for(int i = 0; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}