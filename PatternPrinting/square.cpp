#include<iostream>
using namespace std;

/** 
Star Printing has 3 rules : -
    1. count numbers of rows
    2. Realate every row with number of print statement
    3. Print

    `outer loop row row and inner loop for columns`

*/

int main(){
    int n = 4;
    for(int i = 0; i < n; i++){ // for row
        for(int j = 0; j < n ; j++){ // for cols
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    return 0;
}