
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input: enter at least one element.\n";
        return 1;
    }

    vector<long long> arr(n);

    cout << "Enter " << n << " integers:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long answer = arr[0];
    long long smallestAbs = llabs(arr[0]);

    for (int i = 1; i < n; i++) {
        long long currentAbs = llabs(arr[i]);

        if (currentAbs < smallestAbs) {
            smallestAbs = currentAbs;
            answer = arr[i];
        }
    }

    cout << "Integer with the smallest absolute value: "
         << answer << '\n';

    return 0;
}
