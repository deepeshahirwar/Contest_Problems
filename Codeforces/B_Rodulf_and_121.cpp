 
#include <bits/stdc++.h>

#define ll long long  
#define py  cout<<"YES"<<'\n'
#define pn  cout<<"NO"<<'\n'  
#define pb  push_back 
#define line  '\n' 
using namespace std;

void solve(){
         int n; cin>>n; 
        vector<int>a(n); 
        for(int i=0; i<n; i++){
          cin>>a[i];
        }   
   
   for(int i=1; i<n-1; i++){
    if(a[i-1] <= a[i+1] && a[i] >= 2*a[i-1]){
        a[i+1]  -= a[i-1];
        a[i] -= 2*a[i-1]; 
        a[i-1] = 0;
    }
   }  

   bool ok = true; 
   for(int i=0; i<n; i++){
    if(a[i] != 0){
        ok = false; 
        break;
    }
   }  

   if(ok) 
   py;
   else 
   pn;

}
int main() {
    ll t;
    cin >> t;
    while (t--) { 
          solve();
        }
          
    return 0;
}
