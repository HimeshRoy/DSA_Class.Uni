// Count even and Odd numbers in an array

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

    int countEven = 0;
    int countOdd = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            countEven ++;
        } else{
            countOdd ++;
        }
    }

    cout<<"Even numbers: "<<countEven<<endl<<"Odd numbers: "<<countOdd<<endl;

    return 0;
}