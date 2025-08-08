// 3. Write a Program to create a pyramid pattern using C/C++
#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }
        
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}