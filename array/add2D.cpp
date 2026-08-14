// Add two matrix

#include<iostream>
using namespace std;

int main(){
    int row = 2, cols = 2;
    int arrA[row][cols] = {{1,2},{2,3}}, arrB[row][cols] = {{4,5}, {6,7}};

    int sum[row][cols];
    
     for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            sum[i][j] = arrA[i][j] + arrB[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < cols; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}