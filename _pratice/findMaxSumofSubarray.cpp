// Find the max sum in the sub array
#include<iostream>
#include<vector>

using namespace std;

int main(){
   vector<int> v1 = {5, 4, -1, 7, 8};
   auto currentSum = 0, maxSum = INT_MIN;

   for(int num : v1){
      currentSum += num;

        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        } 
   }
   cout << "Maximum Subarray Sum = " << maxSum << endl;

   return 0;

}
