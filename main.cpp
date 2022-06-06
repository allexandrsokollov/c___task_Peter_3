#include <iostream>
using namespace std;

int** getMatrixFromConsole(int colsAmount, int rowsAmount) {
    int **matrix = new int*[colsAmount];

    for (int i = 0; i < colsAmount; i++) {
        matrix[i] = new int[rowsAmount];
        cout << "Enter row #" << i << endl;
        
        for (int j = 0; j < rowsAmount; j++) {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

int main() {
    int colsAmount, rowsAmount;
    cout << "Input matrix size (cols  rows):  ";
    cin >> colsAmount >> rowsAmount;
    int **matrix = getMatrixFromConsole(colsAmount,rowsAmount);




    return 0;
}

