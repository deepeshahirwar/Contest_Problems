 
#include <bits/stdc++.h>

#define ll long long  
#define py  cout<<"yes"<<'\n'
#define pn  cout<<"no"<<'\n'  
#define pb  push_back 
#define line  '\n' 
using namespace std;

void solve(){
  ll n ; cin>>n; 
  string s,t; 
  cin>>s>>t; 
 
 string s2,t2;
  int one1 =0 , one2 =0; 
  for(int i=0; i<n; i++){
    if(s[i] != t[i]){
       s2.push_back(s[i]); 
       t2.push_back(t[i]);
    }
  } 

    for(int i=0; i<s2.size(); i++){
    if(s2[i]  == '1')one1++;  
    if(t2[i]  == '1')one2++; 
    } 

    cout<<max(one1, one2)<<line;
       
}
int main() {
    ll t;
    cin >> t;
    while (t--) { solve();}
          
    return 0;
}
