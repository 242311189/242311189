// Program 1: Count Even and Odd Numbers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 3, 5, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}
