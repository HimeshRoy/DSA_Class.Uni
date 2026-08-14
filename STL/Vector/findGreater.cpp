#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector <int> arr = {1,24,15,139,2,432,45,34,24,57,54};

    int maxNum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        maxNum = max(maxNum, arr[i]);
    }

    cout<<"Max number in array: "<<maxNum<<endl;

    return 0;
}