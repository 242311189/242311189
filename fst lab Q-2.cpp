// 2. Write a Program in C/C++ to Swap the values of two variables without using any extra variable
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swap: a = " << a << ", b = " << b;

    return 0;
}