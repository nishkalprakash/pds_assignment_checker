#include <iostream>
#include <cstdlib>

void allocateMatrix(int**& matrix, int rows, int cols) {
    matrix = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
}

void deallocateMatrix(int**& matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}

void readMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void swapMatrices(int**& matrixA, int**& matrixB, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::swap(matrixA[i][j], matrixB[i][j]);
        }
    }
}

void multiplyMatrices(int** matrixA, int** matrixB, int**& matrixC, int rowsA, int colsA, int colsB) {
    matrixC = new int*[rowsA];
    for (int i = 0; i < rowsA; ++i) {
        matrixC[i] = new int[colsB];
        for (int j = 0; j < colsB; ++j) {
            matrixC[i][j] = 0;
            for (int k = 0; k < colsA; ++k) {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

int main() {
    int m, n, p;

    std::cin >> m;

    int** matrixA;
    int** matrixB;
    int** matrixC;

    allocateMatrix(matrixA, m, n);
    readMatrix(matrixA, m, n);
    printMatrix(matrixA, m, n);

    allocateMatrix(matrixB, n, p);
    readMatrix(matrixB, n, p);
    printMatrix(matrixB, n, p);

    swapMatrices(matrixA, matrixB, m, n);
    std::cout << "Matrix A after swapping:\n";
    printMatrix(matrixA, m, n);
    std::cout << "Matrix B after swapping:\n";
    printMatrix(matrixB, n, p);

    multiplyMatrices(matrixA, matrixB, matrixC, m, n, p);
    std::cout << "Matrix C (A * B):\n";
    printMatrix(matrixC, m, p);

    deallocateMatrix(matrixA, m);
    deallocateMatrix(matrixB, n);
    deallocateMatrix(matrixC, m);

    return 0;
}