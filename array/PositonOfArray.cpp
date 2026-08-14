// Position of element in array -- linear search

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int index = -1;

    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            index = i;
            break;
        }
    }

    if (index != -1){
        cout << index << endl;
    }
    else{
        cout << "Element not found in the array." << endl;
    }

    return 0;
}