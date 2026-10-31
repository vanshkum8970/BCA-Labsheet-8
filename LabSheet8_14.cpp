// Program 14: Function Overloading (Compile-Time Polymorphism)
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of integers (5 + 10) = " << calc.add(5, 10) << endl;
    cout << "Sum of doubles (5.5 + 10.2) = " << calc.add(5.5, 10.2) << endl;
    return 0;
}
