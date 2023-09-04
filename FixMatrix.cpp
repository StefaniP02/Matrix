#include <iostream>

using namespace std;

void printMatrix(int **arr, int rows, int cols);
void fixMatrix(int **arr, int rows, int cols);
void reorderOddRows(int **arr, int rows, int cols);
void reorderDiagonals(int **arr, int rows, int cols);

int main() {

    int rows, cols;

    cin >> rows;
    cin >> cols;

    int **matrix = new int *[rows];
    int row;
    for (row = 0; row < rows; row++) {
        matrix[row] = new int[cols];
    }
    int col;
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            int number;
            cin >> number;
            matrix[row][col] = number;
        }
    }


    cout << "Before fix" << endl;
    printMatrix(matrix, rows, cols);
    fixMatrix(matrix, rows, cols);
    cout << "after fix" << endl;
    printMatrix(matrix, rows, cols);

    return 0;
}


void printMatrix(int **arr, int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

void fixMatrix(int **arr, int rows, int cols){
    reorderOddRows(arr, rows, cols);

    if(rows == cols){
        reorderDiagonals(arr, rows, cols);
    }
}

void reorderOddRows(int **arr, int rows, int cols){
    for(int row = 0; row < rows; row++){
        int oddCount = 0;
        int evenCount = 0;

        for(int col = 0; col < cols; col++){
            int current = arr[row][col];

            if(current % 2 == 0){
                evenCount++;
                continue;
            }

            oddCount++;
        }

        if(oddCount > evenCount){
            int middle = cols / 2;

            for(int col = 0; col < middle; col++){
                int temp = arr[row][col];
                arr[row][col] = arr[row][cols - 1 - col];
                arr[row][cols - 1 - col] = temp;
            }
        }
    }
}

void reorderDiagonals(int **arr, int rows, int cols){
    for(int row = 0; row < rows; row++){
        for(int col = 0; col < cols; col++){
            if(row == col){
                int secondDiagColIndex = cols - 1 - col;
                int temp = arr[row][col];
                arr[row][col] = arr[row][secondDiagColIndex];
                arr[row][secondDiagColIndex] = temp;
            }
        }
    }
}