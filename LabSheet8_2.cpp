// Program 2: Function to Print Fibonacci Series
#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}

int main() {
    printFibonacci(6);
    return 0;
}
