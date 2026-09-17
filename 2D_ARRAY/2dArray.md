# 2D array 

0    1    2    3 
|    |    |    |
1    2    3    4 --- 0
5    6    7    8 --- 1
9    10   13   12 --- 2

let the above 2D array be, matrix

### now to access elements of array, matrix[row][col]

martrix[1][2] --- 7

matrix[2][1] --- 10

matrix[2][3] --- 12

int size_of_row_2Darray = matrix.size();
int size_of_col_2Darray = matrix[0].size();

int total_size = size_of_row_2Darray * size_of_col_2Darray;

### to make 2D array with vector: 
vector<<vector>> arr(row, vector<int>(col));