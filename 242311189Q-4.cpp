// Program 4: Remove Duplicates
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique Elements: ";
    for (int i = 0; i < n; i++) {
        bool repeat = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                repeat = true;
                break;
            }
        }
        if (!repeat) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}