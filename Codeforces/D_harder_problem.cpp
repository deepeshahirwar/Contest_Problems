#include <bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
   
        ll n;
        cin >> n; 
        vector<ll> a(n),freq(n+1,0);  
        // make set  from 1 - N
      
       for(int i=0; i<n; i++){ 
         cin>>a[i];
        freq[a[i]]++;  
       }
    // first store all distrinct elements from arr
       vector<ll>b; 
       vector<ll>vis(n+1,0);
       for(int i=0; i<n; i++){
          if(freq[a[i]] > 0){
            b.push_back(a[i]);
            freq[a[i]]=0; 
            vis[a[i]]=1;
          }
       }

       // ans use other remaining number from 1 to N
       for(int i=1; i<=n; i++){
          if(b.size() == n){
          break;
          } 
          if(!vis[i]){
            b.push_back(i);
          }
       } 

      for(int i=0; i<b.size(); i++){
        cout<<b[i]<<" ";
      }
       cout<<endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 
    while (t--) {
       solve();
    }

    return 0;
}