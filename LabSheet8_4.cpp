// Program 4: Function to Copy a String from Another String
#include <iostream>
#include <cstring>
using namespace std;

void copyString(char dest[], const char src[]) {
    strcpy(dest, src);
}

int main() {
    char source[] = "COER University";
    char destination[30];
    copyString(destination, source);
    cout << "Copied String: " << destination << endl;
    return 0;
}
