#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cout << "Enter numer of elements: ";
     cin >> n;

     vector<int> arr(n);
     for (int i = 0; i < n; i++){
          cin >> arr[i];
     }

     int target;
     cout<<"Enter target: ";
     cin >> target;

     
     unordered_map<int, int> numMap;

     for (int i = 0; i < n; i++){
          int complement = target - arr[i];
          if (numMap.find(complement) != numMap.end()){
               cout << numMap[complement] << " " << i << "\n";
               return 0;
          }
          numMap[arr[i]] = i;
     }

     return 0;
}