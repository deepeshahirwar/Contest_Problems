#include <bits/stdc++.h>
#define  ll  long long
using namespace std;

void solve() {
    ll n;
    cin >>n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    } 
    vector<ll>diff; 
    for(ll i=0; i<n-1; i++){
        if(a[i] != a[i+1]){
            diff.push_back(i);
        }
    } 
 
 
    ll q; cin>>q; 
    while(q--){
        ll l, r; 
        cin>>l>>r; 
        l--;
        r--; 

        ll lb = lower_bound(diff.begin(), diff.end(), l) - diff.begin(); 

        if(lb < diff.size() && diff[lb] < r){
            cout<<diff[lb]+1 <<" "<< diff[lb]+2<<endl;
        }else{
            cout<<"-1 -1"<<endl;
        }
    }


}

int main() {
    ll t;
    cin >> t;

    while (t--) {
        solve();
    } 
   

    return 0;
}
