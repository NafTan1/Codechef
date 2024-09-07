#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Calculate the sum of the first n natural numbers
        int sum = n * (n + 1) / 2;

        // Determine the maximum length of contiguous subsequence with even sum
        if (sum % 2 == 0) {
            cout << n << endl;
        } else {
            cout << n - 1 << endl;
        }
    }
    return 0;
}