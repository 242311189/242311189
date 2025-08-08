// 5. Write a program in C to find the sum of all elements of the array
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum of all elements: " << sum;

    return 0;
}