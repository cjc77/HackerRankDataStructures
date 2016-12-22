#include <iostream>
using namespace std;


int hourGlassAddition(int max, int rows, int cols, int * * arr);
void printArray(int rows, int cols, int * * arr);
void makeArray(int rows, int cols, int * * & arr);

int main()
{
    int rowSize = 6;
    int colSize = 6;
    int maxSum = -9 * 7;
    int ** arr;
    makeArray(rowSize, colSize, arr);
    maxSum = hourGlassAddition(maxSum, rowSize, colSize, arr);
    cout << maxSum << endl;
    return 0;
}


// Make 2D dynamic array
void makeArray(int rows, int cols, int * * & arr)
{
    arr = new int *[rows];
    for(int i = 0; i < rows; ++i) {
        arr[i] = new int[cols];
    }
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
}


// Find sum of hourglass
int hourGlassAddition(int max, int rows, int cols, int * * arr)
{
    int curRow = 0;
    int row1 = 0;
    int row2 = 0;
    int row3 = 0;
    while(curRow < 4) {
        for(int i = 0; i < cols-2; ++i) {
            row1 = arr[curRow][i] + arr[curRow][i+1] + arr[curRow][i+2];
            row2 = arr[curRow+1][i+1];
            row3 = arr[curRow+2][i] + arr[curRow+2][i+1] + arr[curRow+2][i+2];
            if((row1 + row2 + row3) > max) {
                max = row1 + row2 + row3;
            }
        }
        ++curRow;
    }
    return max;
}
