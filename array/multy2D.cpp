// Multiply two matrix

#include <iostream>
using namespace std;

int main()
{
    int row = 2, cols = 2;
    int arrA[row][cols] = {{1, 2}, {2, 3}}, arrB[row][cols] = {{4, 5}, {6, 7}};

    int mul[row][cols];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < cols; k++)
            {
                mul[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}