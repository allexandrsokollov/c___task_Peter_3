#include <iostream>
using namespace std;

int** getMatrixFromConsole(int rowsAm, int colsAm) {
    int **matrix = new int*[rowsAm];

    for (int i = 0; i < rowsAm; i++) {
        matrix[i] = new int[colsAm];
        cout << "Enter row #" << i + 1 << ": ";

        for (int j = 0; j < colsAm; j++) {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

int main() {
    int rows, cols, resultAmountOfCols;
    cout << "Input matrix size (rows  cols):  ";
    cin >> rows >> cols;
    int **matrix = getMatrixFromConsole(rows, cols);


    cout << "Initial array:" << endl << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    resultAmountOfCols = cols / 2;

    int **resultMatrix = new int*[rows];

    for (int i = 0; i < rows; i++) {
        resultMatrix[i] = new int[resultAmountOfCols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0, k = 0; j < cols; j++) {
            if (j % 2 == 0) {
                continue;
            }
            resultMatrix[i][k++] = matrix[i][j];
        }
    }

    cout << "result array:" << endl << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < resultAmountOfCols; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

