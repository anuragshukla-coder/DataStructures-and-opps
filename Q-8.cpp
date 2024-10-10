//Question-7
#include <iostream>
using namespace std;

void inputMatrix(int matrix[10][10], int rows, int cols, const string &name) {
    cout << "Enter elements of " << name << " matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void transposeMatrix(int matrix[10][10], int transposed[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;

    cout << "Enter number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    inputMatrix(matrix1, rows1, cols1, "first");

    cout << "Enter number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;
    inputMatrix(matrix2, rows2, cols2, "second");

    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(matrix1, matrix2, result, rows1, cols1);
        cout << "Sum of matrices:" << endl;
        displayMatrix(result, rows1, cols1);
    } else {
        cout << "Matrices cannot be added. They have different dimensions." << endl;
    }

    if (cols1 == rows2) {
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
        cout << "Product of matrices:" << endl;
        displayMatrix(result, rows1, cols2);
    } else {
        cout << "Matrices cannot be multiplied. The number of columns of the first matrix is not equal to the number of rows of the second matrix." << endl;
    }

    transposeMatrix(matrix1, result, rows1, cols1);
    cout << "Transpose of the first matrix:" << endl;
    displayMatrix(result, cols1, rows1);

    transposeMatrix(matrix2, result, rows2, cols2);
    cout << "Transpose of the second matrix:" << endl;
    displayMatrix(result, cols2, rows2);

    return 0;
}
