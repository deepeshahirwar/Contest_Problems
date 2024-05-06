#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long findMaxSkill(int N, int M, vector<int>& batsmen, vector<int>& bowlers) {
    sort(batsmen.begin(), batsmen.end(), greater<int>());
    sort(bowlers.begin(), bowlers.end(), greater<int>());

    long long maxSkill = -1;

    for (int b = 4; b <= min(N, 11); ++b) {
        for (int w = 4; w <= min(M, 11 - b); ++w) {
            long long totalSkill = 0;
            for (int i = 0; i < b; ++i)
                totalSkill += batsmen[i];
            for (int i = 0; i < w; ++i)
                totalSkill += bowlers[i];
            maxSkill = max(maxSkill, totalSkill);
        }
    }

    return maxSkill;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> batsmen(N);
        vector<int> bowlers(M);

        for (int i = 0; i < N; ++i)
            cin >> batsmen[i];
        for (int i = 0; i < M; ++i)
            cin >> bowlers[i];

        long long maxSkill = findMaxSkill(N, M, batsmen, bowlers);

        cout << maxSkill << endl;
    }

    return 0;
}
