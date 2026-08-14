#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5, element = 24, index = 4;

    for (int i = size; i > index; i--){
        arr[i] = arr[i - 1];
    }

    arr[index] = element;

    size++;

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}