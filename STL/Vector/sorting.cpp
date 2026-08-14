#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    vector<int> arr = {3,1,4,2,0,7};

    sort(arr.begin(), arr.end());

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}