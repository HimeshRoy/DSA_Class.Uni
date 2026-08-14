#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum: " << sum << endl;

    return 0;
}