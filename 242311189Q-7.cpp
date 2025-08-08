// Program 7: Count Frequency of Each Element
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 2, 4, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Frequencies: ";
    for (int i = 0; i < n; i++) {
        bool counted = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                counted = true;
                break;
            }
        }
        if (!counted) {
            int count = 0;
            for (int k = 0; k < n; k++) {
                if (arr[k] == arr[i]) count++;
            }
            cout << arr[i] << ": " << count << "  ";
        }
    }
    cout << endl;
    return 0;
}