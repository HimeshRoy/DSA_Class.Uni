// Find the sum of all elements of array and also find avarage of array
// Input = [1,2,3,4,5] ; Output = 15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements of array: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++){
        sum += arr[i];
    }

    cout << "Sum of array: " << sum << endl;
    cout<<"Average of array: "<<(sum/n)<<endl;

    return 0;
}