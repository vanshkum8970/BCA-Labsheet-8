// Program 13: Single Inheritance (Person to Student)
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
    float marks;
public:
    void setStudent(string n, int a, float m) {
        setPerson(n, a);
        marks = m;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Aman", 19, 92.0f);
    s.display();
    return 0;
}
