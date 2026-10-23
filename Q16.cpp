
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of athlete scores: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid number of scores.\n";
        return 1;
    }

    vector<long long> scores(n);

    cout << "Enter " << n << " non-negative scores:\n";

    for (int i = 0; i < n; i++) {
        cin >> scores[i];

        if (scores[i] < 0) {
            cout << "Scores must be non-negative.\n";
            return 1;
        }
    }

    long long highest = 0;
    long long secondHighest = 0;

    bool hasHighest = false;
    bool hasSecondHighest = false;

    for (int i = 0; i < n; i++) {
        long long score = scores[i];

        if (!hasHighest) {
            highest = score;
            hasHighest = true;
        }
        else if (score > highest) {
            secondHighest = highest;
            hasSecondHighest = true;

            highest = score;
        }
        else if (score < highest &&
                 (!hasSecondHighest || score > secondHighest)) {
            secondHighest = score;
            hasSecondHighest = true;
        }
    }

    if (hasSecondHighest) {
        cout << "Second-highest distinct score: "
             << secondHighest << '\n';
    } else {
        cout << "Second-highest distinct score: -1\n";
    }

    return 0;
}
