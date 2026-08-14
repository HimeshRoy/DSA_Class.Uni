#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> reversedArr(arr.size());

    reverse_copy(arr.begin(), arr.end(), reversedArr.begin());
    
    for(int x : reversedArr){
        cout << x << ' ';
    }

    return 0;
}
