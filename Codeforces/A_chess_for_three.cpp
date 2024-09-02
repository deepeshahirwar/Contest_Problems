#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        // Sum of points
        int totalPoints = p1 + p2 + p3;

        // Check if the total points are even and feasible
        if (totalPoints % 2 != 0 || p3 > p1 + p2 + (totalPoints / 2)) {
            cout << -1 << endl;
        } else {
            // Maximum number of draws
            int maxDraws = totalPoints / 2;
            cout << maxDraws << endl;
        }
    }

    return 0;
}
