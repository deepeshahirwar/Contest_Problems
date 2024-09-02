#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

   unordered_map<int,int>m1,m2; 
   for(auto it : a)m1[it]++;
    for(auto it : b)m2[it]++; 

    int x =0, y=0; 

    for(int i=1; i<=k; i++){
        if(m1[i] > 0 && m2[i] >0 ){
           x++; 
           y++;
        }
        else if(m1[i] > 0 ){
           x++; 
        } 
        else if( m2[i] >0 ){ 
           y++;
        }else{
            cout<<"NO"<<endl; 
            return;
        }
    } 

    if( (x >= (k/2) ) &&  (y >= (k/2) ) ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        solve();
        t--;
    }

    return 0;
}
