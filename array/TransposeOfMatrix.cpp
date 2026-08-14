// Transpose Of matrix

#include<iostream>
using namespace std;

int main(){
    int row = 2, col = 2;
    int arr[row][col] = {{1,2}, {3,4}};

    int trans[2][2];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            trans[i][j] = arr[j][i];
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout<< trans[i][j];
        } 
        cout<<endl;
    }

    return 0;
}