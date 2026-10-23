
#include <iostream>
using namespace std;

int main() {
    long long base, MOD;
    long long power;

    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    cout << "Enter the modulus (MOD): ";
    cin >> MOD;

    if (base < 0 || power < 0 || MOD < 1) {
        cout << "Invalid input. Base and power must be "
             << "non-negative, and MOD must be positive.\n";
        return 1;
    }

    long long result = 1 % MOD;
    base = base % MOD;

    for (long long i = 0; i < power; i++) {
        result = (result * base) % MOD;
    }

    cout << "Answer = " << result << '\n';

    return 0;
}
