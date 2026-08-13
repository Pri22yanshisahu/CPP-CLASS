#include <iostream>
#include <vector>
using namespace std;

int main() {
    char ch;
    int n;
    int vowels = 0;
    int consonants = 0;

    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> arr(n);

    cout << "Enter characters: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        ch = arr[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {
            vowels++;
        }
        else {
            consonants++;
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    cout << "Number of consonants = " << consonants << endl;

    return 0;
}