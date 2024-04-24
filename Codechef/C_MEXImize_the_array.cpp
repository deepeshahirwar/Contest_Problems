#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == i)
            continue;
        else if (a[i] == 0)
            ans += i;
        else if (a[i] != i)
            ans += abs(a[i] - i);
    }
    cout << ans << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
