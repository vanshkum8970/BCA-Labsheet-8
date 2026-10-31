// Program 10: Class Student with Member Functions
#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll_no;
    float marks;
public:
    void input() {
        cout << "Enter name, roll no, marks: ";
        cin >> name >> roll_no >> marks;
    }
    void display() {
        cout << "Name: " << name << ", Roll No: " << roll_no << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
