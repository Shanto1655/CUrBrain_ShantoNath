
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const long long MOD = 1000000007LL;

    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    vector<long long> arr(n);

    cout << "Enter " << n << " non-negative integers:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] < 0) {
            cout << "Invalid input: numbers must be non-negative.\n";
            return 1;
        }
    }

    long long result = 0;

    for (int i = 0; i < n; i++) {
        result = (result + arr[i]) % MOD;
    }

    cout << "Sum modulo " << MOD << " = " << result << '\n';

    return 0;
}
