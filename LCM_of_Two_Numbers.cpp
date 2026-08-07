#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b;

    x = a;
    y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int lcm = (a * b) / x;
    cout << lcm;

    return 0;
}