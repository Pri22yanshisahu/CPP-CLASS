#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    vector<int> result;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        bool duplicate = false;

        for (int j = 0; j < result.size(); j++) {
            if (arr[i] == result[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            result.push_back(arr[i]);
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}