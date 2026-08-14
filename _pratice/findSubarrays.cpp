// Qs. Find the sum of maximum subarray
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {5, 4, -1, 7, 8};

    for (int start = 0; start < v1.size(); start++)
    {
        for (int end = start; end < v1.size(); end++)
        {
            for (int k = start; k <= end; k++)
            {
                cout << v1[k] << " ";
            }
            cout << endl;
        }
    }
}