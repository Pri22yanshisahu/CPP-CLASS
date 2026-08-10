#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        // Check if element already exists
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                duplicate = true;
                break;
            }
        }

        // Add only unique elements
        if (!duplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}