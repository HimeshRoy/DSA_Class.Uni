// Merge Two array into 3rd array

#include <iostream>
using namespace std;

int main()
{
    int arrA[] = {1, 2, 3, 4, 5}, arrB[] = {6, 7, 8, 9, 10};

    int sizeA = sizeof(arrA) / sizeof(arrA[0]);
    int sizeB = sizeof(arrB) / sizeof(arrB[0]);
    int sizeC = sizeA + sizeB;

    int arrC[sizeC];
    int index = 0;

    for (int i = 0; i < sizeA; i++)
    {
        arrC[index] = arrA[i];
        index++;
    }

    for (int i = 0; i < sizeB; i++)
    {
        arrC[index] = arrB[i];
        index++;
    }

    for (int i = 0; i < sizeC; i++)
    {
        cout << arrC[i] << " ";
    }
}