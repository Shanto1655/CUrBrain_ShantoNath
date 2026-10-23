
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long k;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    vector<long long> arr(n);

    cout << "Enter " << n << " integers "
         << "(positive, zero, or negative):\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter a non-zero integer k: ";
    cin >> k;

    if (k == 0) {
        cout << "Invalid input: k cannot be zero.\n";
        return 1;
    }

    long long mod = (k < 0) ? -k : k;
    long long remainder = 0;
    bool found = false;

    for (int i = 0; i < n; i++) {
        remainder = (remainder + arr[i] % mod) % mod;

        // Make the remainder non-negative.
        if (remainder < 0) {
            remainder += mod;
        }

        cout << "Prefix ending at index " << i
             << ": remainder = " << remainder << '\n';

        if (remainder == 0) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Result: True - a divisible prefix exists.\n";
    } else {
        cout << "Result: False - no divisible prefix exists.\n";
    }

    return 0;
}
