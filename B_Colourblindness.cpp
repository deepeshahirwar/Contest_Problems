 
#include <bits/stdc++.h>

#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define pb  push_back 
#define line  '\n' 
using namespace std;

void solve(){
    ll n ;cin>>n; 
     string s1,s2;  
     char ch1; 
     for(int i=0; i<n; i++){
             cin>>ch1; 
             s1.pb(ch1);
     } 
      char ch2; 
     for(int i=0; i<n; i++){
             cin>>ch2; 
             s2.pb(ch2);
     } 

      int cnt =0;
     for(int i=0; i<n; i++){
            if(s1[i] == s2[i] || s1[i] == 'G' && s2[i] == 'B' || s1[i] == 'B' && s2[i] == 'G' ){
                cnt++;
            }
     }
     
    if(cnt == n) py;
    else pn;
           
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
