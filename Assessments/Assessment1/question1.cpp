#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
     cout<<"Enter numer of elements: ";
     cin>>n;

     vector<int> arr(n);

     cout<<"Enter the elements in array: "<<endl;
     for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int small = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < small) {
            small = arr[i];
        }
    }

    cout << "Smallest element: " << small <<endl;

    return 0;
}