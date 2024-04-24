 
#include <bits/stdc++.h>

#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define pb  push_back 
#define line  '\n' 
using namespace std;

void solve(){
  ll n,m,k ; cin>>n>>m>>k; 
  vector<int>b(n),c(m);
  for(int i=0; i<n; i++)cin>>b[i];
  for(int i=0; i<m; i++)cin>>c[i];
     
     int cnt =0;
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(b[i]+c[j] <= k)cnt++;
    }
  }
 
 cout<<cnt<<endl;
    
       
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
