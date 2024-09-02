 



#include <iostream>
#include <vector>
#include <algorithm> 
#define ll long long 
using namespace std;

bool canBuildSquare(vector<ll>& buckets) {
    ll sum = 0;
    for (int square : buckets) {
        sum += square;
    }

    ll side = 0;
    while (side * side < sum) {
        side++;
    }

    return side * side == sum;
}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> buckets(n);
        for (ll i = 0; i < n; ++i) {
            cin >> buckets[i];
        }

        if (canBuildSquare(buckets)) {
            cout <<"YES"<<endl;
        } else {
            cout <<"NO"<< endl;
        }
    }

    return 0;
}
