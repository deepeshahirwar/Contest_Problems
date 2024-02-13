 
#include <bits/stdc++.h>

#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define line  '\n' 
using namespace std;

void solve(){
    ll n,k ;cin>>n>>k;  
    vector<int>a(n); 
    for(int i=0; i<n; i++)cin>>a[i]; 
     int mini = INT_MAX; 
     bool ok = false;
    for(int i=0; i<n; i++){
        if(a[i] >= k){
            ok = true; 
            
            if(mini > a[i]%k){
                mini = a[i]%k;
            }
           
        }
    }
   
    if(ok){
        cout<<mini<<endl;
    } 
    else{
        cout<<"-1"<<endl;
    }
  
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
