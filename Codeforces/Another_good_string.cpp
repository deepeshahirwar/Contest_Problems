
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--){
        int N, Q;
        cin >> N >> Q;

        string S;
        cin >> S;

        int curr_count = 0;
        int max_count = 0;

        for (int i = 0; i < N; ++i) {
            if (i > 0 && S[i] == S[i - 1]) {
                curr_count += 1;
            } else {
                curr_count = 1;
            }

            max_count = max(max_count, curr_count);
        }

        cout << max_count << " ";

        for (int q = 0; q < Q; ++q) {
            char c;
            cin >> c;
            S += c;

            if (c == S[S.size() - 2]) {
                curr_count += 1;
            } else {
                curr_count = 1;
            }

            max_count = max(max_count, curr_count);
            cout << max_count << " ";
        }

        cout << endl;
    }

    return 0;
}