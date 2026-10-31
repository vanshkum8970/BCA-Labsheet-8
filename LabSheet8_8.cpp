// Program 8: Function to Find the Sum of Diagonal Elements in a Matrix
#include <iostream>
using namespace std;

int diagonalSum(int mat[3][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += mat[i][i];
    }
    return sum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Diagonal Sum = " << diagonalSum(matrix, 3) << endl;
    return 0;
}
