// Program 5: Find Second Largest Element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 1, 7, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max1 = arr[0], max2 = -9999;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    cout << "Second Largest: " << max2 << endl;
    return 0;
}