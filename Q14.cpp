
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long threshold;

    cout << "Enter the number of sales figures: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    vector<long long> sales(n);

    cout << "Enter " << n << " sales figures:\n";

    for (int i = 0; i < n; i++) {
        cin >> sales[i];

        if (sales[i] < 0) {
            cout << "Sales figures must be non-negative.\n";
            return 1;
        }
    }

    cout << "Enter the threshold: ";
    cin >> threshold;

    if (threshold < 0) {
        cout << "Threshold must be non-negative.\n";
        return 1;
    }

    vector<long long> filteredSales;

    for (int i = 0; i < n; i++) {
        if (sales[i] >= threshold) {
            filteredSales.push_back(sales[i]);
        }
    }

    cout << "Filtered sales: [";

    for (int i = 0; i < (int)filteredSales.size(); i++) {
        cout << filteredSales[i];

        if (i < (int)filteredSales.size() - 1) {
            cout << ", ";
        }
    }

    cout << "]\n";

    return 0;
}
