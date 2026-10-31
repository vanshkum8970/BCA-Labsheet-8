// Program 1: Function to Find a Prime Number
#include <iostream>
using namespace std;

bool checkPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num = 13;
    if (checkPrime(num))
        cout << num << " is Prime." << endl;
    else
        cout << num << " is Not Prime." << endl;
    return 0;
}
