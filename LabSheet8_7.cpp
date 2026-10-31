// Program 7: Function to Find the Sum of Two Matrices
#include <iostream>
using namespace std;

void addMatrices(int a[2][2], int b[2][2]) {
    int sum[2][2];
    cout << "Sum of Matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    addMatrices(A, B);
    return 0;
}
